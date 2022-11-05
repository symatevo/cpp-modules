#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat() {
    std::cout << "Cat: Default constructor called" << std::endl;
    type = "Cat";
    i = new Brain();
}

Cat::Cat(Cat &other) {
    std::cout << "Cat: Copy constructor called" << std::endl;
    *this = other;
}

Cat &Cat::operator=(Cat &other) {
    std::cout << "Cat: Copy assignement operator called" << std::endl;
    if (this != &other) {
        this->type = other.getType();
        this->i = new Brain;
        *(this->i) = *(other.i);
    }
    return (*this);
}

Cat::~Cat() {
    std::cout << "Cat: Destructor called" << std::endl;
    delete i;
}

void Cat::makeSound() const {
    std::cout << "😽😽😽😽😽😽" << std::endl;
}

WrongCat::WrongCat() {
    std::cout << "WrongCat: Default constructor called" << std::endl;
    type = "WrongCat";
}

WrongCat::WrongCat(WrongCat &other) {
    std::cout << "WrongCat: Copy constructor called" << std::endl;
    *this = other;
}

WrongCat &WrongCat::operator=(WrongCat &other) {
    std::cout << "WrongCat: Copy assignement operator called" << std::endl;
    if (this != &other) {
        this->type = other.getType();
    }
    return (*this);
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat: Destructor called" << std::endl;
}

void WrongCat::makeSound() const {
    std::cout << "😽😽😽😽😽😽" << std::endl;
}