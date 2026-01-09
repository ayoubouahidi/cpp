#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(WrongCat &other);
        ~WrongCat();
        WrongCat& operator=(const WrongCat& other);
        void makeSound();
};