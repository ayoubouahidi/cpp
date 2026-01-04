#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name):ClapTrap(name,100, 50, 20)
{
    std::cout << "constructeur ScavTrap" << std::endl;
}

ScavTrap::ScavTrap():ClapTrap()
{
    std::cout << "Default constructor called ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other):ClapTrap(other)
{
    std::cout << "Copy constructor called ScavTrap" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    if (this == &other)
        return *this;
    ClapTrap::operator=(other);
    std::cout << "Copy assignment operator called ScavTrap" << std::endl;
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor called ScavTrap " << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (this->Energy_points > 0 && this->points > 0)
    {
        std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->Attack_damage << " points of damage!" << std::endl;
        this->Energy_points--;
        
    }
    else
        std::cout << "ScavTrap " << this->name << " cannot attack" << std::endl;
}

void ScavTrap::guardGate( void )
{
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}
