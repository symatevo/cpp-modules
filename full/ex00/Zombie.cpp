#include "Zombie.hpp"

Zombie::Zombie(const std::string &name)
{
    _name = name;
    std::cout << _name << " has born." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << this->_name << " died." << std::endl;
}

void Zombie::announce(void)
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}