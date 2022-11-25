#include "Deserialization.hpp"

Data* deserialize(uintptr_t raw) {
    Data *a;
    a = reinterpret_cast<Data *> (raw);
    return a;
}