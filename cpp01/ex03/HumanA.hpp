#ifndef _HUMANA_HPP
#define _HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
    private:
        Weapon      &wb;
        std::string  name;
    public:
		HumanA(std::string nname, Weapon &a);
		void attack();
} ;

#endif