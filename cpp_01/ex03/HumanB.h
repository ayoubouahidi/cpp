#ifndef HUMAIN_B_H
# define HUMAIN_B_H

#include <string>

class Weapon;

class HumanB
{
    private:
        std::string name;
        Weapon *weapon;
    public: 
        HumanB(const std::string &name);
        void attack();
        void setWeapon(Weapon& newWeapon);
};


#endif