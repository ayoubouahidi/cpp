#include <iostream>
#include <string>
#include "ClapTrap.hpp"

int main()
{
    // bismilah
    // start
    ClapTrap trap("ayoub");
    trap.attack("Dummy");
    trap.beRepaired(5);

    trap.takeDamage(4);
    trap.takeDamage(10);
    trap.attack("Dummy");
    trap.beRepaired(10);
    for (int i = 0; i < 3; i++) {
        trap.attack("Enemy");
        trap.beRepaired(2);
    }


}