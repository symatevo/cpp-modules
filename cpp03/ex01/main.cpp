#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap c("Klep");
    ScavTrap a(c);
    a.attack("John");
    a.guardGate();
}