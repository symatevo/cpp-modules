#include "ClapTrap.hpp"

int main()
{
    ClapTrap a;
    ClapTrap d(a);
    ClapTrap b("Mesropik");
    ClapTrap c("Klep");
    a = c;
    a.attack("Gvenik");
    c.takeDamage(10);
    c.takeDamage(10);
    c.beRepaired(3);
    b.takeDamage(5);
    b.beRepaired(3);
    b.takeDamage(8);
    b.beRepaired(3);
}