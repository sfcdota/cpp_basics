#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->setRawBits(0);
}

Fixed::Fixed(Fixed const &f)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

Fixed& Fixed::operator=(Fixed const &f)
{
	std::cout << "Assignation operator called" << std::endl;
	fixed_point_value_ = f.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits function called" << std::endl;
	return fixed_point_value_;
}

void Fixed::setRawBits(int const raw)
{
	fixed_point_value_ = raw;
}

Fixed::Fixed(const int integer)
{
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(integer << bits_);
}

Fixed::Fixed(const float floating)
{
	std::cout << "Float constructor called" << std::endl;
	fixed_point_value_ = roundf(floating * 256.0f);
}

float Fixed::toFloat(void) const
{
	return static_cast<float>(fixed_point_value_ / 256.0f);
}

int Fixed::toInt(void) const
{
	return fixed_point_value_ >> bits_;
}

std::ostream& operator<<(std::ostream& os, const Fixed &f)
{
	os << f.toFloat();
	return os;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
