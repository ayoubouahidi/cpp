#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>

class Weapon
{
    private:
        std::string type;
    public:
        void setType(std::string val);
        std::string getType();
};

#endif