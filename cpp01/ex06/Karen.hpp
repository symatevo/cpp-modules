#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>

class Karen {
        struct s_stat {
            std::string name;
            void (Karen::*ptr) (void);
        } ;
    private:
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
    public:
        s_stat  stat[4];
        Karen();
        void complain (std::string level);
} ;


#endif