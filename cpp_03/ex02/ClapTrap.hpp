#ifndef CLAP_TRAP
#define CLAP_TRAP

#include <iostream>

class ClapTrap
{
    // private:
    protected:
        std::string name;
        int points;
        int Energy_points;
        int Attack_damage;
        ClapTrap(const std::string name, int points, int Energy_points, int Attack_damage);
    public:
        ClapTrap();
        ClapTrap(const std::string name);
        ClapTrap(const ClapTrap& other);
        ClapTrap& operator=(const ClapTrap& other);
        virtual ~ClapTrap();
        virtual void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

};
#endif