#include "Serialization.hpp"

uintptr_t serialize(Data* ptr) {
    uintptr_t a;
    a = reinterpret_cast<uintptr_t> (ptr);
    return (a);
}