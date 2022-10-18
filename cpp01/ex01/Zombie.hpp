#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#define RESET   "\033[0m" 
#define RED     "\033[31m"

#include <iostream>

class Zombie {
    private:
        std::string _name;
    public:
        Zombie();
        ~Zombie();
        void set_name(std::string name);
        void announce ( void );
} ;

Zombie* zombieHorde( int N, std::string name );

#endif