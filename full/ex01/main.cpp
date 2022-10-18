#include "Zombie.hpp"

int main(void)
{
    Zombie* zombie;
    int     N = 4;

    zombie = zombieHorde(4, "Foo");
    if (zombie == NULL)
        return (1);
    for (int i = 0; i < N; i++)
        zombie->announce();
        
    delete[] zombie;
    return (0);
}