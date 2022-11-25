#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
    private: 
        Brain* i;
    public:
        Dog();
        Dog(Dog &other);
        Dog &operator= (Dog &other);
        ~Dog();
        virtual void makeSound() const;
} ;

#endif