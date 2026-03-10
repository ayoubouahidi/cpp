#ifndef SHRUBBEY_HPP
# define SHRUBBEY_HPP
#include "AForm.hpp"

#include <fstream>

class ShrubberyCreationForm: public AForm
{
    private:
        std::string target;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        virtual ~ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm & other);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);  
        void execute(Bureaucrat const& executor) const;

        class WrongValue :  public std::exception
        {
            public:
                WrongValue();
                const char * what() const throw();
        };


    };

#endif