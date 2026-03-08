#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(): name(), grade_sign(), grade_exec()
{

}

AForm::AForm(const std::string& name , int grade_sign, int grade_exec):name(name), grade_sign(grade_sign), grade_exec(grade_exec)
{
    indicateur = false;
    if (this->grade_sign > 150 || this->grade_exec > 150)
        throw Bureaucrat::GradeTooLowException();
    else if (this->grade_sign < 1 || this->grade_exec < 1)
        throw Bureaucrat::GradeTooHighException();
}

AForm::AForm(const AForm &other):name(other.name), grade_sign(other.grade_sign), grade_exec(other.grade_exec), indicateur(other.indicateur)
{
}

AForm::~AForm()
{
    std::cout <<  "Destructor called AForm" << std::endl;
}

int AForm::getGrade_exe() const
{
    return this->grade_exec;
}

int AForm::getGrade_sign() const
{
    return this->grade_sign; 
}

std::string AForm::getName() const
{
    return this->name;
}

bool AForm::getIndc() const
{
    return this->indicateur;
}

void AForm::beSigned(Bureaucrat& b)
{
    if (this->getGrade_sign() < b.getGrade())
        throw AForm::GradeTooLowException();
    this->indicateur = true;
}

std::ostream& operator<<(std::ostream& out, const AForm& f)
{
    out << f.getName() << ", AForm grade required to sign it :" << f.getGrade_sign() << ", grade required to execute it : " << f.getGrade_exe();
    return out;
}


// execption functions

AForm::GradeTooLowException::GradeTooLowException()
{}

const char* AForm::GradeTooLowException::what() const throw()
{
    return "range is to low";
}