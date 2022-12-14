#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog() {
    std::cout << "Dog: Default constructor called" << std::endl;
    type = "Dog";
    i = new Brain();
}

Dog::Dog(Dog &other) {
    std::cout << "Dog: Copy constructor called" << std::endl;
    *this = other;
}

Dog &Dog::operator=(Dog &other) {
    std::cout << "Dog: Copy assignement operator called" << std::endl;
    if (this != &other) {
        this->type = other.getType();
        this->i = new Brain;
        *(this->i) = *(other.i);
    }
    return (*this);
}

Dog::~Dog() {
    std::cout << "Dog: Destructor called" << std::endl;
    delete i;
}

void Dog::makeSound() const {
    std::cout << "🐶🐶🐶🐶🐶🐶" << std::endl;
}