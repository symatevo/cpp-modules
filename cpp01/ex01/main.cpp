#include "Zombie.hpp"

int main(void) {
    Zombie *s;
    int     N;

    N = 5;
    s = zombieHorde(N, "Foo");
    for (int i = 0; i < N; i++)
        s[i].announce();
    delete [] s;
}