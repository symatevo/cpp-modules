#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name)
{
    Zombie *zombie;

    if (N < 0)
        return (0);
    zombie = new Zombie[N];
    for(int i = 0; i < N; i++)
        zombie[i].set_name(name);
    return zombie;
}