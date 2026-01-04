#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name):ClapTrap(name,100, 100, 30)
{
    std::cout << "constructeur FragTrap" << std::endl;
}

FragTrap::FragTrap():ClapTrap()
{
    std::cout << "Default constructor called FragTrap" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other):ClapTrap(other)
{
    std::cout << "Copy constructor called FragTrap" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
    if (this == &other)
        return *this;
    ClapTrap::operator=(other);
    std::cout << "Copy assignment operator called FragTrap" << std::endl;
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "Destructor called FragTrap " << std::endl;
}

void FragTrap::attack(const std::string& target)
{
    if (this->Energy_points > 0 && this->points > 0)
    {
        std::cout << "FragTrap " << this->name << " attacks " << target << ", causing " << this->Attack_damage << " points of damage!" << std::endl;
        this->Energy_points--;
        
    }
    else
        std::cout << "FragTrap " << this->name << " cannot attack" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
   std::cout << "a positive high-fives request " << std::endl;
}

