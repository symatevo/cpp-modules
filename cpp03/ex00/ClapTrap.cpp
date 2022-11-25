#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
    std::cout << "ClapTrap Default Constructor called" << std::endl;
    _name = "";
    _hit_points = 10;
    _energy_points = 10;
    _attack_damage = 0;
}

ClapTrap::ClapTrap(std::string name) {
    std::cout << "ClapTrap Constructor called" << std::endl;
    _name = name;
    _hit_points = 10;
    _energy_points = 10;
    _attack_damage = 0;
}

ClapTrap::ClapTrap(ClapTrap &other) {
    std::cout << "ClapTrap Copy constructor called" << std::endl;
    *this = other;
}

ClapTrap &ClapTrap::operator= (ClapTrap &other) {
    std::cout << "ClapTrap Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->_name = other.getname();
        this->_hit_points = other.gethits();
        this->_energy_points = other.getenergy();
        this->_attack_damage = other.getdamage();
    }
    return (*this);
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap Destructor called" << std::endl;
}

std::string ClapTrap::getname(void) {
    return _name;
}

unsigned int ClapTrap::gethits(void) {
    return _hit_points;
}

unsigned int ClapTrap::getenergy(void) {
    return _energy_points;
}

unsigned int ClapTrap::getdamage(void) {
    return _attack_damage;
}

void ClapTrap::attack(const std::string& target) {
    if (_hit_points && _energy_points) {
        std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
        _energy_points = _energy_points - 1;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (_hit_points == 0)
        std::cout << "ClapTrap " << _name << " is dead" << std::endl;
    else
    {
        std::cout << "ClapTrap " << _name << " damadeg by " << amount << " points of hits!" << std::endl;
        if (amount < _hit_points)
            _hit_points = _hit_points - amount;
        else
            _hit_points = 0;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (_hit_points == 0)
        std::cout << "ClapTrap " << _name << " is alredy dead" << std::endl;
    else
    {
    std::cout << "ClapTrap " << _name << " repairs itself by " << amount << " points!" << std::endl;
    _hit_points = _hit_points + amount;
    _energy_points = _energy_points + amount;
    }
}
