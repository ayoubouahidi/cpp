#include "Bureaucrat.hpp"
#include <string>


Bureaucrat::Bureaucrat():name(""), grade(150)
{
}

Bureaucrat::Bureaucrat(const std::string& name, int grade):name(name), grade(grade)
{
    if (this->grade > 150)
        throw GradeTooLowException();
    else if (this->grade < 1)
        throw GradeTooHighException();
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Destructor called Bureaucrat" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other):name(other.name) , grade(other.grade)
{
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
    if (this == &other)
        return *this;
    this->grade = other.grade;
    return *this;
}


int Bureaucrat::getGrade()
{
    return this->grade;
}

std::string Bureaucrat::getName()
{
    return this->name;
}

void Bureaucrat::increment()
{
    if(this->grade + 1 > 150)
        throw GradeTooLowException();
    this->grade++;
}

void Bureaucrat::decrement()
{
    if (this->grade - 1 < 1)
        throw GradeTooHighException();
    this->grade--;
}

std::ostream& Bureaucrat::operator <<(std::ostream& os)
{
    os << this->name << "Bureaucrat grade" << this->grade;
    return os;
}

// exeption function 

GradeTooHighException::GradeTooHighException()
{}

const char* GradeTooHighException::what () const throw()
{
    return "range is to hight : should be less or equal than 1";
}


GradeTooLowException::GradeTooLowException()
{}

const char* GradeTooLowException::what() const throw()
{
    return "range is to low : should be more or equal than 150";
}