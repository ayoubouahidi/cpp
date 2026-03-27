#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"


PresidentialPardonForm::PresidentialPardonForm(): AForm(), _target("")
{
    std::cout << "default constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target):AForm("PresidentialPardonForm", 25, 5), _target(target)
{
        std::cout << "PresidentialPardonForm Constructor for target " << this->getTarget() << " called" << std::endl;

}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm Deconstructor " << this->getName() << " called" << std::endl;

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other):AForm(other), _target(other._target)
{}


PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
    std::cout << "PresidentialPardonForm Assignation operator called" << std::endl;
    if (this == &other)
        return *this;
    this->_target = other._target;
    return *this;
}       

std::string PresidentialPardonForm::getTarget() const 
{
    return (this->_target);
}


void PresidentialPardonForm::execute(Bureaucrat const& executor) const
{
    if(executor.getGrade() > this->getGrade_exe())
        throw Bureaucrat::GradeTooLowException();
    else if (!this->getIndc())
        throw  AForm::FormNotSign();
    else
        std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

std::ostream	&operator<<(std::ostream &o, PresidentialPardonForm *a)
{
	o << "Form " << a->getName() <<
	":\n\tsign-grade:\t" << a->getGrade_sign() <<
	"\n\texec-grade:\t" << a->getGrade_exe() <<
	"\n\tis signed:\t" << a->getIndc() <<
	std::endl;
	return (o);
}
