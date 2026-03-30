#ifndef ROBOT_HPP
# define ROBOT_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
    private:
        std::string target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        virtual ~RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm &other);
        RobotomyRequestForm & operator=(const RobotomyRequestForm &other);
        void execute(Bureaucrat const& executor) const;
        std::string getTarget(void)const;

    class WrongValue :  public std::exception
        {
            public:
                WrongValue();
                const char * what() const throw();
        };
};

std::ostream	&operator<<(std::ostream &o, RobotomyRequestForm *a);

#endif
