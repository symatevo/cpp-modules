#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

#include "HumanA.hpp"
#include "HumanB.hpp"

class Weapon
{
private:
    std::string _type;
public:
    Weapon(const char *type);
    void setType(std::string type);
    std::string const &getType() const;
};

#endif