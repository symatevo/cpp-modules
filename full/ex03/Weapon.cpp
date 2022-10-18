#include "Weapon.hpp"

Weapon::Weapon(const char *type)
{
    _type = type;
}

void Weapon::setType(std::string type)
{
    _type = type;
}

std::string const &Weapon::getType() const
{
    return (_type);
}