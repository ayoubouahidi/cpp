#include <iostream>
#include "Zombie.h"


Zombie::Zombie():name()
{}
// Zombie::Zombie(const std::string &name)
// {

// }

std::string	Zombie::getName()
{
	return this->name;
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}

void Zombie::annonce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

