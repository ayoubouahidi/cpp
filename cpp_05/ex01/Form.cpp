#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(): name(), grade_sign(), grade_exec(), indicateur()
{

}

Form::Form(const std::string& name , int grade_sign, int grade_exec, bool indicateur):name(name), grade_sign(grade_sign), grade_exec(grade_exec), indicateur(indicateur)
{
    if (this->grade_sign > 150 || this->grade_exec > 150)
        throw GradeTooLowException();
    else if (this->grade_sign < 1 || this->grade_exec < 1)
        throw GradeTooHighException();
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

void Form::beSigned(Bureaucrat b)
{
    
}

std::ostream& operator<<(std::ostream& out, const Form& f)
{
    out << f.getName() << ", Form grade required to sign it :" << f.getGrade_sign() << ", grade required to execute it : " , f.getGrade_exe();
    return out;
}