#include "FragTrap.hpp"

FragTrap::FragTrap() {
    std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    std::cout << "FragTrap Constructor called" << std::endl;
    _hit_points = 100;
    _energy_points = 100;
    _attack_damage = 30;
}

FragTrap::FragTrap(FragTrap &other) {
    std::cout << "FragTrap Copy constructor called" << std::endl;
    *this = other;
}

FragTrap &FragTrap::operator= (FragTrap &other) {
    std::cout << "FragTrap Copy assignement constructor called" << std::endl;
    if (this != &other)
    {
        this->_name = other.getname();
        this->_hit_points = other.gethits();
        this->_energy_points = other.getenergy();
        this->_attack_damage = other.getdamage();
    }
    return (*this);
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap Destructor called" << std::endl;
}

void FragTrap::attack(const std::string& target) {
    if (_hit_points && _energy_points) {
        std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
        _energy_points = _energy_points - 1;
    }
}

void FragTrap::highFivesGuys(void) {
    std::cout << "Positive high fives request" << std::endl;
}