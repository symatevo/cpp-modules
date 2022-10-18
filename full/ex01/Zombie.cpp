#include "Zombie.hpp"

void Zombie::set_name(std::string name)
{
    _name = name;
}

void Zombie::announce(void)
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << this->_name << " died." << std::endl;
}