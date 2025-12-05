#include <iostream>

#include "Weapon.h"

void Weapon::setType(std::string val)
{
    this->type = val;
}

std::string Weapon::getType()
{
    return this->type;
}

