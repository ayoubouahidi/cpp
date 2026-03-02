#include <iostream>
#include <stdexcept>

class Bureaucrat
{
    private:
        const std::string& name;
        int grade;    
    public:
        Bureaucrat();
        Bureaucrat(const Bureaucrat &other);
        ~Bureaucrat();
        Bureaucrat& operator=(const Bureaucrat& other);
        std::string getName();
        int getGrade();
};

class GradeTooHighException : public std::exception
{
    public:
        GradeTooHighException();
        const char* what() const noexcept;

};