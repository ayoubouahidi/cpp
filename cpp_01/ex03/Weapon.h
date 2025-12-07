#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>

class Weapon
{
    private:
        std::string type;
    public:
		Weapon(const std::string type);
        void setType(std::string val);
        std::string getType();
};

#endif