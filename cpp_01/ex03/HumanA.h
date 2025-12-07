#ifndef HUMAIN_A_H
# define HUMAIN_A_H

#include <string>

class Weapon;

class HumanA
{
    private:
        std::string name;
        Weapon &weapon;
    public: 
        HumanA(const std::string &name, Weapon &weapon);
        void attack();
};


#endif