#include <iostream>


class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(std::string &type);
        WrongAnimal(WrongAnimal &other);
        virtual ~WrongAnimal();
        WrongAnimal& operator=(const WrongAnimal& other);
        std::string getType();
        virtual void makeSound();
};

