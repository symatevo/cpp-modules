#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template< typename T>
void iter(T *ptr, int size, void(*f) (T const &ob)) {
    if (size > 0) {
        for (int i = 0; i < size; i++)
            (*f)(ptr[i]);
    }
}

#endif