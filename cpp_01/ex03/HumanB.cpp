#include <iostream>
#include "HumanB.h"
#include "Weapon.h"


HumanB::HumanB(std::string& name, Weapon* weapon)
    : name(name), weapon(weapon){}

void HumanB::setWeapon(Weapon& newWeapon) {
        weapon = &newWeapon;
}

void HumanB::attack()
{
    std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

