#include "HumanA.hpp"

HumanA::HumanA(std::string nname, Weapon a) {
    name = nname;
    wb = 
    //wb.setType(a.getType());
}

void    HumanA::attack() {
    std::cout << name << " attacks with their " << wb.getType() << std::endl;
}