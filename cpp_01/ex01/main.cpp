#include <iostream>
#include "Zombie.h"


Zombie* zombieHorde(int N, std::string name)
{
	Zombie* zombies = new Zombie[N];
    int i = 0;

    while (i < N)
    {
        zombies[i].setName(name);
        i++;
    }
    return zombies;
}

int main()
{
    Zombie* zombies = zombieHorde(3, "ayoub");
    int i = 0;

    while (i < 3)
    {
        std::cout << zombies[i].getName() << std::endl;
        i++;
    }
    delete[] zombies;
}