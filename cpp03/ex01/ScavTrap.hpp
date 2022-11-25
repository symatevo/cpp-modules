#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
    public :
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(ScavTrap &ob);
        ScavTrap &operator= (ScavTrap &ob);
        ~ScavTrap();
        void attack(std::string const& target);
        void guardGate();
} ;

#endif