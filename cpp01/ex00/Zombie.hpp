#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#define RESET   "\033[0m" 
#define RED     "\033[31m"
#include <iostream>

class Zombie {
    private:
        std::string _name;
    public:
        Zombie(std::string _name);
        ~Zombie();
        void announce ( void );
} ;

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif