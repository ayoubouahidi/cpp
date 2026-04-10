#include <iostream>

#ifndef AFORM_HPP
# define AFORM_HPP

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
        virtual ~AForm();
        AForm& operator=(const AForm& other);
        std::string getName() const;
        int getGrade_sign() const;
        int getGrade_exe() const;
        bool getIndc() const;
        void beSigned(Bureaucrat& b);
        virtual void execute(Bureaucrat const& executor) const = 0;

    class GradeTooLowException : public std::exception
    {   
        public: 
            GradeTooLowException();
            const char* what() const throw();   
    };

    class GradeTooHighException : public std::exception
    {   
        public: 
            GradeTooHighException();    
            const char* what() const throw();   
    };
    
    class FormNotSign : public std::exception
    {
        public:
            FormNotSign();
            const char* what() const throw();
    };

};


std::ostream& operator<<(std::ostream& out, const AForm& f);

#endif