#include "HumanB.hpp"

HumanB::HumanB(std::string nname) {
    name = nname;
}

void    HumanB::setWeapon(Weapon type) {
    wb = type;
}

void    HumanB::attack() {
    std::cout << name << " attacks with their " << wb.getType() << std::endl;
}