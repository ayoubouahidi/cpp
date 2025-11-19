#include <iostream>
#include "Zombie.h"


Zombie::Zombie():name()
{}

Zombie::~Zombie()
{
	std::cout << "name of zombie destroyed : " << this->name << std::endl;
};

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

