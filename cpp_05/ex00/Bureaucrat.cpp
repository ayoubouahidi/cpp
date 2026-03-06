#include "Bureaucrat.hpp"
#include <string>


Bureaucrat::Bureaucrat():name(""), grade(150)
{
}

Bureaucrat::Bureaucrat(const std::string& name, int grade):name(name), grade(grade)
{
    if (this->grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else if (this->grade < 1)
        throw Bureaucrat::GradeTooHighException();
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


int Bureaucrat::getGrade() const
{
    return this->grade;
}

std::string Bureaucrat::getName() const
{
    return this->name;
}

void Bureaucrat::increment()
{
    if (this->grade - 1 < 1)
        throw GradeTooHighException();
    this->grade--;
}

void Bureaucrat::decrement()
{
    if (this->grade + 1 > 150)
        throw GradeTooLowException();
    this->grade++;
}



// exception functions



Bureaucrat::GradeTooHighException::GradeTooHighException()
{}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "grade is too high: should be greater than or equal to 1";
}


Bureaucrat::GradeTooLowException::GradeTooLowException()
{}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "grade is too low: should be less than or equal to 150";
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& b) {
    out << b.getName() << ", bureaucrat grade " << b.getGrade();
    return out;
}