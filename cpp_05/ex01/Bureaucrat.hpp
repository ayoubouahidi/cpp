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
        std::string getName() const;
        int getGrade() const;
        void signedForm(Form& form);

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
        // a continue ..
        class  : public std::exception
        {   
            public: 
                ();    
                const char* what() const throw();   
        };
};



std::ostream& operator<<(std::ostream& out, const Bureaucrat& b);