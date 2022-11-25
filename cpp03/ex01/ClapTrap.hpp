#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap {
    protected:
        std::string _name;
        unsigned int         _hit_points;
        unsigned int         _energy_points;
        unsigned int         _attack_damage;
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(ClapTrap &other);
        ClapTrap &operator= (ClapTrap &other);
        ~ClapTrap();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        std::string getname(void);
        unsigned int gethits(void);
        unsigned int getenergy(void);
        unsigned int getdamage(void);
} ;

#endif
