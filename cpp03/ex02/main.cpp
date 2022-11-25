#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    FragTrap c("Klep");
    FragTrap a(c);
    a.attack("John");
    a.highFivesGuys();
}