#include "Bureaucrat.hpp"
#include <string>
#include "AForm.hpp"

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


void Bureaucrat::signForm(AForm& form)
{
    try{
        form.beSigned(*this);
        std::cout << this->name << " signed " << form.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << this->name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
    }
}

void Bureaucrat::executeForm(AForm& form)
{
    try {
        form.execute(*this);
        std::cout << this->name << " executed " << form.getName() << std::endl;
    }
    catch (const std::exception& e) {
        std::cout << this->name << " couldn't execute " << form.getName() << " because " << e.what() << std::endl;
    }
}

// exeption function 

Bureaucrat::GradeTooHighException::GradeTooHighException()
{}

const char* Bureaucrat::GradeTooHighException::what () const throw()
{
    return "range is to hight : should be less or equal than 1";
}


Bureaucrat::GradeTooLowException::GradeTooLowException()
{}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "range is to low : should be more or equal than 150";
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& b) {
    out << b.getName() << ", bureaucrat grade " << b.getGrade();
    return out;
}
 