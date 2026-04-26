#include <stdint.h>
#include "Data.hpp"


class Serializer
{
    private:
        
    public:
        Serializer();
        ~Serializer();
        Serializer(const Serializer& other);
        Serializer& operator=(const Serializer& other);
        uintptr_t serialize(Data* ptr);
        Data* deserialize(uintptr_t raw);
};



