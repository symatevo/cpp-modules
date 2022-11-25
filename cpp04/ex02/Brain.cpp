#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain: Default constructor called" << std::endl;
}

Brain::Brain(Brain &other) {
    std::cout << "Brain: Copy constructor called" << std::endl;
    *this = other;
}

Brain &Brain::operator=(Brain &other) {
    std::cout << "Brain: Copy assignement constructor called" << std::endl;
    if (this != &other)
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = other.ideas[i];
    }
    return (*this);
}

Brain::~Brain() {
    std::cout << "Brain: Destructor called" << std::endl;
}