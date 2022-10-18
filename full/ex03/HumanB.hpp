#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "HumanA.hpp"
#include "Weapon.hpp"

class Weapon;

class HumanB {
private:
  std::string _name;
  Weapon *_weapon;
public:
  HumanB(std::string name);
  void attack();
  void setWeapon(Weapon &weapon);
};

#endif
