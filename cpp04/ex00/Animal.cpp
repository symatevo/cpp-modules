#include "Animal.hpp"

Animal::Animal() {
    std::cout << "Animal: Default construtcor called" << std::endl;
    type = "";
}

Animal::Animal(Animal &other) {
    std::cout << "Animal: Copy constructor called" << std::endl;
    *this = other;
}

Animal &Animal::operator=(Animal &other) {
    std::cout << "Animal: Copy assignement operator called" << std::endl;
    if (this != &other) {
        this->type = other.getType();
    }
    return (*this);
}

Animal::~Animal() {
    std::cout << "Animal: Destructor called" << std::endl;
}

std::string Animal::getType() const{
    return type;
}

void Animal::makeSound() const {
    std::cout << "Random animal sound" << std::endl;
}

WrongAnimal::WrongAnimal() {
    std::cout << "WrongAnimal: Default construtcor called" << std::endl;
    type = "";
}

WrongAnimal::WrongAnimal(WrongAnimal &other) {
    std::cout << "WrongAnimal: Copy constructor called" << std::endl;
    *this = other;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal &other) {
    std::cout << "WrongAnimal: Copy assignement operator called" << std::endl;
    if (this != &other) {
        this->type = other.getType();
    }
    return (*this);
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal: Destructor called" << std::endl;
}

std::string WrongAnimal::getType() const{
    return type;
}

void WrongAnimal::makeSound() const {
    std::cout << "Random animal sound" << std::endl;
}