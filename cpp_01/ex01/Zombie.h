#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>


class Zombie
{
	private:
		std::string name;
	public :	
		void annonce(void);
		Zombie();
		~Zombie();
		std::string getName();
		void	setName(std::string name);
};

#endif
