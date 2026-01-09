#include <iostream>

#include "Dog.hpp"

class Cat : public Animal 
{
    public:
        Cat();
        Cat(Cat &other);
        ~Cat();
        Cat& operator=(const Cat& other);
        void makeSound();
};