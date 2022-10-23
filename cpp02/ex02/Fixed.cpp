#include "Fixed.hpp"

const int Fixed::_bits = 8;

Fixed::Fixed() {
    _integer = 0;
}

Fixed::Fixed(int num) {
    _integer = num << Fixed::_bits;
}

Fixed::Fixed(float num) {
    _integer = static_cast<int>( roundf( num * (1 << Fixed::_bits)));
}

Fixed::Fixed(Fixed const &c) {
	*this = c;
}

Fixed &Fixed::operator= (const Fixed &c)
{
    if (this != &c)
    {
        this->_integer = c.getRawBits();
	}
    return (*this);
}

Fixed::~Fixed() {
    _integer = 0;
}

int	Fixed::getRawBits(void) const {
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

bool Fixed::operator>(const Fixed& ob)
{
    return this->getRawBits() > ob.getRawBits();
}

bool Fixed::operator<(const Fixed& ob)
{
    return this->getRawBits() < ob.getRawBits();
}

bool Fixed::operator>=(const Fixed& ob)
{
    return this->getRawBits() >= ob.getRawBits();
}

bool Fixed::operator<=(const Fixed& ob)
{
    return this->getRawBits() <= ob.getRawBits();
}

bool Fixed::operator==(const Fixed& ob)
{
    return this->getRawBits() == ob.getRawBits();
}

bool Fixed::operator!=(const Fixed& ob)
{
    return this->getRawBits() <= ob.getRawBits();
}

Fixed Fixed::operator+(const Fixed& ob)
{
    Fixed   result;
    result.setRawBits(this->getRawBits() + ob.getRawBits());
    return result;
}

Fixed Fixed::operator-(const Fixed& ob)
{
    Fixed   result;
    result.setRawBits(this->getRawBits() + ob.getRawBits());
    return result;
}

Fixed Fixed::operator*(const Fixed& ob)
{
    Fixed   result(this->toFloat() * ob.toFloat());
    return result;
}

Fixed Fixed::operator/(const Fixed& ob)
{
    Fixed   result(this->toFloat() / ob.toFloat());
    return result;
}

Fixed	&Fixed::operator++( void )
{
	this->_integer++;
	return (*this);
}

Fixed	Fixed::operator++( int )
{
	Fixed	old(*this);

	++(*this);
	return (old);
}

Fixed	&Fixed::operator--( void )
{
	this->_integer--;
	return (*this);
}

Fixed	Fixed::operator--( int )
{
	Fixed	old(*this);

	--(*this);
	return (old);
}

const Fixed &Fixed::max(Fixed const &a, Fixed const &b)
{
    if ((Fixed)a > b)
        return a;
    else
        return b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    if (a > b)
        return a;
    else
        return b;
}

const Fixed &Fixed::min(Fixed const &a, Fixed const &b)
{
    if ((Fixed)a < b)
        return a;
    else
        return b;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    if (a < b)
        return a;
    else
        return b;
}