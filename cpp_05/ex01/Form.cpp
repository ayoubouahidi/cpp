#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(): name(), grade_sign(), grade_exec()
{

}

Form::Form(const std::string& name , int grade_sign, int grade_exec):name(name), grade_sign(grade_sign), grade_exec(grade_exec)
{
    indicateur = false;
    if (this->grade_sign > 150 || this->grade_exec > 150)
        throw Form::GradeTooLowException();
    else if (this->grade_sign < 1 || this->grade_exec < 1)
        throw Form::GradeTooHighException();
}

Form::Form(const Form &other):name(other.name), grade_sign(other.grade_sign), grade_exec(other.grade_exec), indicateur(other.indicateur)
{
}

Form::~Form()
{
    std::cout <<  "Destructor called Form" << std::endl;
}

int Form::getGrade_exe() const
{
    return this->grade_exec;
}

int Form::getGrade_sign() const
{
    return this->grade_sign; 
}

std::string Form::getName() const
{
    return this->name;
}

bool Form::getIndc() const
{
    return this->indicateur;
}

void Form::beSigned(Bureaucrat& b)
{
    if (b.getGrade() > this->getGrade_sign())
        throw Form::GradeTooLowException();
    this->indicateur = true;
}

std::ostream& operator<<(std::ostream& out, const Form& f)
{
    out << f.getName() << ", Form grade required to sign it :" << f.getGrade_sign() << ", grade required to execute it : " << f.getGrade_exe();
    return out;
}


// execption functions

Form::GradeTooLowException::GradeTooLowException()
{}

const char* Form::GradeTooLowException::what() const throw()
{
    return "range is to low";
}

Form::GradeTooHighException::GradeTooHighException()
{
}

const char* Form::GradeTooHighException::what() const throw()
{
    return "grade is too high";
}
