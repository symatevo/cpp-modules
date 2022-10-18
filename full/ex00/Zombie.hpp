#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string.h>

class Zombie
{
private:
    std::string _name;
public:
    void announce(void);
    Zombie(const std::string &name);
    ~Zombie();
};



#endif