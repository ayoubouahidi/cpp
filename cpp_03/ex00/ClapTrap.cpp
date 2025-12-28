#include "ClapTrap.hpp"

ClapTrap::ClapTrap():name("") , points(10), Energy_points(10), Attack_damage(0)
{
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string name):name(name) , points(10), Energy_points(10), Attack_damage(0)
{
    std::cout << "ClapTrap " << this->name << " created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other):name(other.name) , points(other.points), Energy_points(other.Energy_points), Attack_damage(other.Attack_damage)
{
    std::cout << "Copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator= (const ClapTrap& other)
{
    if (this == &other)
        return *this;
    this->name = other.name;
    this->points = other.points;
    this->Energy_points = other.Energy_points;
    this->Attack_damage = other.Attack_damage;
    std::cout << "Copy assignment operator called" << std::endl;
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->Energy_points > 0 && this->points > 0)
    {
        std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->Attack_damage << " points of damage!" << std::endl;
        this->Energy_points--;
    }
    else
        std::cout << "ClapTrap " << this->name << " cannot attack" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if ((int)this->points - (int)amount < 0)
    {
        std::cout << "Error" << std::endl;
        return ;
    }
    this->points = this->points - amount;
    std::cout << "ClapTrap " << this->name << " is taking damage" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->points > 0 && this->Energy_points > 0)
    {
        this->Energy_points = this->Energy_points - 1;
        this->points = this->points + amount;
        std::cout << "ClapTrap " << this->name << " repairs itself for " << amount << " hit points!" << std::endl;
    }else
        std::cout << "Error" << std::endl;
}
