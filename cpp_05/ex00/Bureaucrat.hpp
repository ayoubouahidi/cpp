#include <iostream>
#include <stdexcept>

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
        std::string getName();
        int getGrade();
        std::ostream& operator <<(std::ostream& os);
};

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