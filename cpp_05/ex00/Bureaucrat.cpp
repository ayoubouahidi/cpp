#include "Bureaucrat.hpp"



Bureaucrat::Bureaucrat():name(name), grade()
{
    try
    {
        if (this->grade > 150)
            throw GradeTooHighException();
        // else if(this->grade < 1)
            // throw ;               
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}



int Bureaucrat::getGrade()
{
    return this->grade;
}

std::string Bureaucrat::getName()
{
    return this->name;
}

// exeption function 

GradeTooHighException::GradeTooHighException()
{}

const char* GradeTooHighException::what() const noexcept
{
    return "range is to hight : should be less or equal than 150";
}