#include <iostream>
#include "Zombie.h"


Zombie* zombieHorde(int N, std::string name)
{
	Zombie *zombie = new Zombie[N];

	int i = 0;
	while(i < N)
	{
		zombie[i].setName(name);
		i++;
	}
	return zombie;
}

int main()
{
	
	Zombie* zombie = zombieHorde(3, "ayoub");
	std::cout << zombie[2].getName() << std::endl;
	delete[] zombie;

}