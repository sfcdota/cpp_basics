#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->setRawBits(0);
}

Fixed::Fixed(Fixed &f)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

Fixed& Fixed::operator = (Fixed const &f)
{
	std::cout << "Assignation operator called" << std::endl;
	fixed_point_value_ = f.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits function called" << std::endl;
	return fixed_point_value_;
}

void Fixed::setRawBits(int const raw)
{
	fixed_point_value_ = raw;
}

Fixed::Fixed(const int in)
{
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(in << 8);
}

Fixed::Fixed(const float in)
{
	std::cout << "Float constructor called" << std::endl;
	this->setRawBits()
}

float Fixed::toFloat(void) const
{

}

int Fixed::toInt(void) const
{
	return roundf()
}

std::ostream& Fixed::operator<<(std::ostream& os)
{

}


Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
