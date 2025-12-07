#include <iostream>
#include "Weapon.h"

Weapon::Weapon(const std::string type): type(type)
{}

void Weapon::setType(std::string val)
{
    this->type = val;
}

std::string Weapon::getType()
{
    return this->type;
}

