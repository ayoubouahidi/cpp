#include "Dog.hpp"

Dog::Dog():Animal()
{
    Brain  brain;
    this->brain = new Brain(brain);
    type = "Dog";
    std::cout << "Default consructeur called in Dog" << std::endl;
}

Dog::Dog(Dog &other):Animal(other)
{
    brain = new Brain();
    *brain = *other.brain;
    std::cout << "Copy constructor called Dog" << std::endl;
}

Dog::~Dog()
{
    delete this->brain;
    std::cout << "Destructor called Dog" << std::endl;
}

Dog &Dog::operator=(const Dog& other)
{
    if (this == &other)
        return *this;
    *brain = *other.brain;
    this->type = other.type;
    std::cout << "Copy assignment operator called in Dog" << std::endl;
    return *this;
}


void Dog::makeSound()
{
    std::cout << "Woof" << std::endl;
}


