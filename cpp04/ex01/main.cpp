#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    // const Animal* k = new Dog();
    // const Animal* b = new Cat();
    // delete k;//should not create a leak
    // delete b;
    // const Animal *d[100];
    // for (int i = 0; i < 50; i++) {
    //     d[i] = new Dog();
    // }
    
    // for (int i = 50; i < 100; i++) {
    //     d[i] = new Cat();
    // }

    // for (int i = 0; i < 50; i++) {
    //     delete d[i];
    // }
    
    // for (int i = 50; i < 100; i++) {
    //     delete d[i];
    // }
    Dog basic;
    {
        Dog tmp = basic;
    }
    std::cout << "ok\n";
    return 0;
}