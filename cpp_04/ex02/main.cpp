#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
    Cat *Animal = new Cat();
    // const WrongAnimal* wanimal = new WrongAnimal();
    // const WrongAnimal* k = new WrongCat();
    // std::cout << k->getType() << " " << std::endl;
    // k->makeSound();
    // wanimal->makeSound();
    // delete wanimal;
    // delete k;
    return 0;
}