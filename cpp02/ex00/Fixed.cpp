#include "Fixed.hpp"

const int Fixed::_fractional = 8;

Fixed::Fixed() {
    std::cout << "Default constructor called" << std::endl;
    _integer = 0;
}

Fixed::Fixed(Fixed &c) {
	std::cout << "Copy constructor called" << std::endl;
	*this = c;
}

Fixed &Fixed::operator= (Fixed &c)
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