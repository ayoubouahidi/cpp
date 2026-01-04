#include <iostream>
#include <string>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
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
    // ScavTrap scrav("mook"); 
    // ClapTrap Clap("babak");
    // ScavTrap s("gg");
    
    // for (size_t i = 0; i < 60; i++)
    // {
    //     scrav.beRepaired(-1);

    // }

    // scrav.takeDamage(10);
    // scrav.beRepaired(1);
    // scrav = s;
    // scrav.beRepaired(1);
    // scrav.beRepaired(1);

    FragTrap frag("frag");
    FragTrap f("f");
    frag.takeDamage(10);
    frag.beRepaired(1);
    frag = f;
    frag.beRepaired(1);
    frag.beRepaired(1);

    

    
}