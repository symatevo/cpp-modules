#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class Animal {
    protected:
        std::string type;
    public:
        Animal();
        Animal(Animal &other);
        Animal &operator= (Animal &other);
        virtual ~Animal();
        std::string getType() const;
        virtual void makeSound() const = 0;
} ;

class WrongAnimal {
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(WrongAnimal &other);
        WrongAnimal &operator= (WrongAnimal &other);
        ~WrongAnimal();
        std::string getType() const;
        virtual void makeSound() const;
} ;

#endif

