#include <iostream>

#ifndef FORM_HPP
# define FORM_HPP

class Bureaucrat;

class AForm
{
    private:
        const std::string name;
        const int grade_sign;
        const int  grade_exec;
        bool indicateur;
    public:
        AForm();
        AForm(const std::string& name , int grade_sign, int grade_exec);
        AForm(const AForm &other);
        ~AForm();
        std::string getName() const;
        int getGrade_sign() const;
        int getGrade_exe() const;
        bool getIndc() const;
        void beSigned(Bureaucrat& b);

    class GradeTooLowException : public std::exception
        {   
            public: 
                GradeTooLowException();
                const char* what() const throw();   
        };
    class WrongValue :  public std::exception
        {
            public:
                WrongValue();
                const char * what() const throw();
        };
};


std::ostream& operator<<(std::ostream& out, const AForm& f);

#endif