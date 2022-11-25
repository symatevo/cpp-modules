#include "HumanA.hpp"

HumanA::HumanA(std::string nname, Weapon &a) : name(nname), wb(a) {

}

void    HumanA::attack() {
    std::cout << name << " attacks with their " << wb.getType() << std::endl;
}