#ifndef _FIXED_HPP
#define _FIXED_HPP
#include <iostream>
#include <cmath>

class   Fixed {
    private:
        int                 _integer;
        static const int    _bits;
    public:
        Fixed();
        Fixed(int num);
        Fixed (float num);
        Fixed(Fixed const &c);
        Fixed &operator= (const Fixed &c);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;
} ;

std::ostream& operator<<(std::ostream& out,const Fixed& ob);

#endif