#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():AForm(), target("")
{
    std::cout << "default constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target):AForm("RobotomyRequestForm", 72, 45), target(target)
{
    std::cout << "RobotomyRequestForm Constructor for target " << this->getTarget() << " called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm Deconstructor " << this->getName() << " called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &src)
{
	std::cout << "RobotomyRequestForm Assignation operator called" << std::endl;
	if (this == &src)
		return *this;
	return *this;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other):AForm(other), target(other.target)
{}

std::string	RobotomyRequestForm::getTarget(void)const
{
	return (this->target);
}

std::ostream	&operator<<(std::ostream &o, RobotomyRequestForm *a)
{
	o << "Form " << a->getName() <<
	":\n\tsign-grade:\t" << a->getGrade_sign() <<
	"\n\texec-grade:\t" << a->getGrade_exe() <<
	"\n\tis signed:\t" << a->getIndc() <<
	std::endl;
	return (o);
}