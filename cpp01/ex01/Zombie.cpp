#include "Zombie.hpp"

Zombie::Zombie() {
    _name = "";
 };

void    Zombie::set_name(std::string name) {
    _name = name;
}

Zombie::~Zombie() {
    std::cout << "Zombie " << _name << " died :(" << std::endl;
}

void    Zombie::announce(void) {
    std::cout << _name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie* zombieHorde( int N, std::string name ) {
    Zombie *s;

    if (N < 0)
        return (0);
    s = new Zombie[N];
    for (int i = 0; i < N; i++)
        s[i].set_name(name);
    return (s);
}