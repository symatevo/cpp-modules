#include "Serialization.hpp"
#include "Deserialization.hpp"
#include <iostream>

int main() {
    Data ankap;
    Data *b;
    ankap.a = 2;
    b = deserialize(serialize(&ankap));
    std::cout << b << std::endl;
    std::cout << &ankap << std::endl;
}