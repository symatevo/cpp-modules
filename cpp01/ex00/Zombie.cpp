#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
    _name = name;
}

Zombie::~Zombie() {
    std::cout << "Zombie " << _name << " died" << std::endl;
}

void    Zombie::announce(void) {
    std::cout << _name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie* newZombie( std::string name ) {
    Zombie *p;
    p = new Zombie(name);
    return (p);
} ;

void randomChump( std::string name ) {
    Zombie p(name);
    p.announce();
} ;