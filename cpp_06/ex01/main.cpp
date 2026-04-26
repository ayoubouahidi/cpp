#include "Serializer.hpp"

int main()
{
    Data data;
    data.age = 30;
    data.name = "John Doe";

    Serializer serializer;

    uintptr_t raw = serializer.serialize(&data);
    std::cout << "Serialized data: " << raw << std::endl;

    Data* deserializedData = serializer.deserialize(raw);
    std::cout << "Deserialized data: " << deserializedData->name << ", " << deserializedData->age << std::endl;

    return 0;
}