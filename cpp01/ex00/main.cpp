#include "Zombie.hpp"

int main(void) {
    Zombie *n;
    n = newZombie("Foo");
    randomChump("Foo");
    delete (n);
}