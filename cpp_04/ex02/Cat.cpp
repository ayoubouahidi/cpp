#include "Cat.hpp"

Cat::Cat():Animal()
{
    this->brain = new Brain();
    type = "Cat";
    std::cout << "Default consructeur called in Cat" << std::endl;
}

Cat::Cat(Cat &other):Animal(other)
{
    brain = new Brain();
    *brain = *other.brain;
    std::cout << "Copy constructor called Cat" << std::endl;
}

Cat::~Cat()
{
    delete this->brain;
    std::cout << "Destructor called Cat" << std::endl;
}

Cat &Cat::operator=(const Cat& other)
{
    if (this == &other)
        return *this;
    *brain = *other.brain;
    this->type = other.type;
    std::cout << "Copy assignment operator called in Cat" << std::endl;
    return *this;
}

void Cat::makeSound()
{
    std::cout << "Moew" << std::endl;
}
