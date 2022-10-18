#include "Zombie.hpp"

Zombie* newZombie( std::string name );
void randomChump( std::string name );

int main()
{
    Zombie *Zombie_1;
    Zombie *Zombie_2;

    Zombie_1 = newZombie("Zombie 1");
    Zombie_2 = newZombie("Zombie 2");

    Zombie_1->announce();
    Zombie_2->announce();

    randomChump("Zombie 3");
    randomChump("Zombie 4");

    delete Zombie_1;
    delete Zombie_2;

    return (0);
}