#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal 
{
    private:
        Brain* brain;  
    public:
        Dog();
        Dog(Dog &other);
        ~Dog();
        Dog& operator=(const Dog& other);
        void makeSound();
};

#endif