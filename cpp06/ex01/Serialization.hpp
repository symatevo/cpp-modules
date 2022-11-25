#ifndef SERIALIZATION_HPP
#define SERIALIZATION_HPP
#include <stdint.h>

struct Data {
    int a;
} ;

uintptr_t serialize(Data* ptr);

#endif
