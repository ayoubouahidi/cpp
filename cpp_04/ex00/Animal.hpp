#include <iostream>


class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(std::string &type);
        Animal(Animal &other);
        ~Animal();
        Animal& operator=(const Animal& other);

};