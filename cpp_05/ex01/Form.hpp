#include <iostream>

class Form
{
    private:
        const std::string name;
        bool indicateur;
        const int grade_sign;
        const int  grade_exec;
    public:
        Form();
        Form(const std::string& name , int grade_sign, int grade_exec);
        Form(const Form &other);
        ~Form();
        std::string getName();
        int getGrade_sign();
        int getGrade_exe();
        bool getIndc();
};

std::ostream& operator<<(std::ostream& out, const Form& b);
