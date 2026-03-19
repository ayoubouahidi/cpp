#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>
#include <string>
#include "AForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm():AForm(), target("")
{}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):AForm("ShrubberyCreationForm", 145, 137), target(target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other):AForm(other), target(other.target)
{
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
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
    if (!this->getIndc())
        throw AForm::GradeTooLowException();
    if (executor.getGrade() > this->getGrade_exe())
        throw AForm::GradeTooLowException();
    createShrubbery(this->target);
}





// exeption 
ShrubberyCreationForm::WrongValue::WrongValue()
{}

const char * ShrubberyCreationForm::WrongValue::what() const throw()
{
    return "Wrong value";    
}

std::ostream	&operator<<(std::ostream &o, ShrubberyCreationForm *a)
{
	o << "Form " << a->getName() <<
	":\n\tsign-grade:\t" << a->getGrade_sign() <<
	"\n\texec-grade:\t" << a->getGrade_exe() <<
	"\n\tis signed:\t" << a->getIndc() <<
	std::endl;
	return (o);
}