#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>
#include <string>
#include "AForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm():AForm(), target("")
{
    std::cout << "default constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):AForm("ShrubberyCreationForm", 145, 137), target(target)
{
    std::cout << "ShrubberyCreationForm Constructor for target " << this->getTarget() << " called" << std::endl;

}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
     std::cout << "RobotomyRequestForm Deconstructor " << this->getName() << " called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other):AForm(other), target(other.target)
{
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
    std::cout << "ShrubberyCreationForm Assignation operator called" << std::endl;
    if (this == &other)
        return *this;
    this->target = other.target;
    return *this;
}





void createShrubbery(std::string target)
{
    std::string full_name = target + "_shrubbery";
    std::ofstream file(full_name.c_str());
    if (!file.is_open())
        return ;
    file << "    *\n";
    file << "   ***\n";
    file << "  *****\n";
    file << " *******\n";
    file << "    |\n";
    file.close();
    
}

void ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
    if ((int)executor.getGrade() > this->getGrade_exe())
        throw Bureaucrat::GradeTooLowException();
    else if (!this->getIndc())
        throw AForm::FormNotSign();
    else
        createShrubbery(this->target);
}

std::string	ShrubberyCreationForm::getTarget(void)const
{
	return (this->target);
}





// exeption 
// ShrubberyCreationForm::WrongValue::WrongValue()
// {}

// const char * ShrubberyCreationForm::WrongValue::what() const throw()
// {
//     return "Wrong value";    
// }

std::ostream	&operator<<(std::ostream &o, ShrubberyCreationForm *a)
{
	o << "Form " << a->getName() <<
	":\n\tsign-grade:\t" << a->getGrade_sign() <<
	"\n\texec-grade:\t" << a->getGrade_exe() <<
	"\n\tis signed:\t" << a->getIndc() <<
	std::endl;
	return (o);
}