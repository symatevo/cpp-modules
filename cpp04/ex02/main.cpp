#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Animal* k = new Dog();
    const Animal* b = new Cat();
    delete k;//should not create a leak
    delete b;

    return 0;
}