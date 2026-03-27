#ifndef PRESIDENTAL_HPP
# define PRESIDENTAL_HPP
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    private:
        std::string _target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        virtual ~PresidentialPardonForm();
        PresidentialPardonForm(const PresidentialPardonForm& other);
        PresidentialPardonForm& operator=(const PresidentialPardonForm& other);
        std::string getTarget() const ;
        void execute(Bureaucrat const& executor) const;

};

std::ostream &operator<<(std::ostream &o, PresidentialPardonForm *a);
#endif