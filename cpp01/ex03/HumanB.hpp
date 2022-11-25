#ifndef _HUMANB_HPP
#define _HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
    private:
        Weapon      *wb;
        std::string  name;
    public:
		HumanB(std::string nname);
		void attack();
		void setWeapon(Weapon &type);
} ;

#endif