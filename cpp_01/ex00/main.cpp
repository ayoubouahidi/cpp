#include <iostream>
#include "Zombie.h"



Zombie* newZombie(std::string name)
{
	Zombie *zombie = new Zombie;
	zombie->setName(name);
	return zombie;
}

void randomChump( std::string name )
{
	Zombie zombie;
	zombie.setName(name);
	zombie.annonce();
}

int main()
{
	Zombie *zombie = newZombie("AYOUB");

	std::cout << "le nom est : " << zombie->getName() << std::endl; 
	delete zombie;
	randomChump("ayoub");
}