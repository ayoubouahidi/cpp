#include <iostream>
#include <stdexcept>

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
#include "Form.hpp"


class Bureaucrat
{
    private:
        const std::string name;
        int grade;    
    public:
        Bureaucrat();
        Bureaucrat(const std::string& name , int grade);
        Bureaucrat(const Bureaucrat &other);
        ~Bureaucrat();
        void increment();
        void decrement();
        Bureaucrat& operator=(const Bureaucrat& other);
        std::string getName() const;
        int getGrade() const;
        void signForm(Form& form);

        class GradeTooHighException : public std::exception
        {   
            public: 
                GradeTooHighException();    
                const char* what() const throw();   
        };

        class GradeTooLowException : public std::exception
        {   
            public: 
                GradeTooLowException();    
                const char* what() const throw();   
        };
    };

std::ostream& operator<<(std::ostream& out, const Bureaucrat& b);

#endif