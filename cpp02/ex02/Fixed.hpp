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
        bool operator>(const Fixed& ob);
        bool operator<(const Fixed& ob);
        bool operator>=(const Fixed& ob);
        bool operator<=(const Fixed& ob);
        bool operator==(const Fixed& ob);
        bool operator!=(const Fixed& ob);
        Fixed operator+(const Fixed& ob);
        Fixed operator-(const Fixed& ob);
        Fixed operator*(const Fixed& ob);
        Fixed operator/(const Fixed& ob);
        Fixed	&operator++(void);
        Fixed	operator++(int);
        Fixed	&operator--(void);
        Fixed	operator--(int);
        static Fixed &min(Fixed &a, Fixed &b);
        static const Fixed &min(Fixed const &a, Fixed const &b);
        static Fixed &max(Fixed &a, Fixed &b);
        static const Fixed &max(Fixed const &a, Fixed const &b);
} ;

std::ostream& operator<<(std::ostream& out,const Fixed& ob);

#endif