#ifndef _FIXED_HPP
#define _FIXED_HPP
#include <iostream>

class   Fixed {
    private:
        int                 _integer;
        static const int    _fractional;
    public:
        Fixed();
        Fixed(Fixed &c);
        Fixed &operator= (Fixed &c);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
} ;

#endif