#include <iostream>

class Form
{
    private:
        const std::string name;
        const int grade_sign;
        const int  grade_exec;
        const bool indicateur = false;
    public:
        Form();
        Form(const std::string& name , int grade_sign, int grade_exec, bool indicateur);
        Form(const Form &other);
        ~Form();
        std::string getName() const;
        int getGrade_sign() const;
        int getGrade_exe() const;
        bool getIndc() const;
        void beSigned(Bureaucrat b);

    class GradeTooLowException : public std::exception
        {   
            public: 
                GradeTooLowException();    
                const char* what() const throw();   
        };
};

std::ostream& operator<<(std::ostream& out, const Form& f);
