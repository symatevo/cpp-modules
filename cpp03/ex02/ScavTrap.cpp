#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
    std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    std::cout << "ScavTrap Constructor called" << std::endl;
    _hit_points = 100;
    _energy_points = 50;
    _attack_damage = 20;
}

ScavTrap::ScavTrap(ScavTrap &other) {
    std::cout << "ScavTrap Copy constructor called" << std::endl;
    *this = other;
}

ScavTrap &ScavTrap::operator= (ScavTrap &other) {
    std::cout << "ScavTrap Copy assignement constructor called" << std::endl;
    if (this != &other)
    {
        this->_name = other.getname();
        this->_hit_points = other.gethits();
        this->_energy_points = other.getenergy();
        this->_attack_damage = other.getdamage();
    }
    return (*this);
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap Destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
    if (_hit_points && _energy_points) {
        std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
        _energy_points = _energy_points - 1;
    }
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap is now  in Gate keeper mode " << std::endl;
}