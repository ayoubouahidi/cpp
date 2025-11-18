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
		Zombie(const std::string &name);
		std::string getName();
		void	setName(std::string name);
};

#endif
