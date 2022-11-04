#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
    protected:
        std::string type;
    public:
        Animal();
        Animal(Animal &other);
        Animal &operator= (Animal &other);
        ~Animal();
        std::string getType() const;
        virtual void makeSound() const;
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

