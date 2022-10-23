#include "Fixed.hpp"

const int Fixed::_bits = 8;

Fixed::Fixed() {
    std::cout << "Default constructor called" << std::endl;
    _integer = 0;
}

Fixed::Fixed(int num) {
    std::cout << "Int constructor called" << std::endl;
    _integer = num << Fixed::_bits;
}

Fixed::Fixed(float num) {
    std::cout << "Float constructor called" << std::endl;
    _integer = static_cast<int>( roundf( num * (1 << Fixed::_bits)));
}

Fixed::Fixed(Fixed const &c) {
	std::cout << "Copy constructor called" << std::endl;
	*this = c;
}

Fixed &Fixed::operator= (const Fixed &c)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &c)
    {
        this->_integer = c.getRawBits();
	}
    return (*this);
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return _integer;
}

void Fixed::setRawBits( int const raw ) {
	_integer = raw;
}

float Fixed::toFloat() const
{
    return (float)_integer / (float)(1 << Fixed::_bits);
}

int Fixed::toInt() const
{
    return _integer >> Fixed::_bits;
}

std::ostream& operator<<(std::ostream& out,const Fixed& ob)
{
    out << ob.toFloat();
    return (out);
}