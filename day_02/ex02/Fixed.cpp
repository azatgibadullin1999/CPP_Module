/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 21:28:28 by root              #+#    #+#             */
/*   Updated: 2021/09/06 00:12:56 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _FixedPointValue(0) { }

Fixed::Fixed(const int num) : _FixedPointValue(num << _NumberOfFractionalBits) { }

Fixed::Fixed(const float num) {
	float	fraction_part;
	float	integer_part;

	fraction_part = modff(num, &integer_part);
	this->_FixedPointValue = round(num * (1 << this->_NumberOfFractionalBits));
}

Fixed::Fixed(const Fixed &fixed) : _FixedPointValue(fixed._FixedPointValue) { }

Fixed::~Fixed(void) { }

Fixed	&Fixed::operator=(const Fixed &rvalue) {
	this->_FixedPointValue = rvalue._FixedPointValue;
	return *this;
}

Fixed	&Fixed::operator=(const int &rvalue) {
	this->_FixedPointValue = rvalue;
	return *this;
}

Fixed	Fixed::operator+(const Fixed &other) const {
	Fixed	dst;

	dst.setRawBit(this->getRawBit() + other.getRawBit());
	return (dst);
}

Fixed	Fixed::operator-(const Fixed &other) const {
	Fixed	dst;

	dst.setRawBit(this->getRawBit() - other.getRawBit());
	return (dst);
}

Fixed	Fixed::operator*(const Fixed &other) const {
	Fixed	dst;

	dst.setRawBit((this->getRawBit() * other.getRawBit()) >> this->_NumberOfFractionalBits);
	return (dst);
}

Fixed	Fixed::operator/(const Fixed &other) const {
	Fixed	dst;

	dst.setRawBit(this->getRawBit() / other.getRawBit());
	return (dst);
}

Fixed	&Fixed::operator++(void) {
	++this->_FixedPointValue;
	return *this;
}

Fixed	Fixed::operator++(int) {
	Fixed	dst(*this);

	++this->_FixedPointValue;
	return dst;
}

Fixed	&Fixed::operator--(void) {
	--this->_FixedPointValue;
	return *this;
}

Fixed	Fixed::operator--(int) {
	Fixed	dst(*this);

	--this->_FixedPointValue;
	return dst;
}




bool	Fixed::operator>(const Fixed &other) const { return this->getRawBit() > other.getRawBit(); }

bool	Fixed::operator<(const Fixed &other) const { return this->getRawBit() < other.getRawBit(); }

bool	Fixed::operator>=(const Fixed &other) const { return this->getRawBit() >= other.getRawBit(); }

bool	Fixed::operator<=(const Fixed &other) const { return this->getRawBit() <= other.getRawBit(); }

bool	Fixed::operator==(const Fixed &other) const { return this->getRawBit() == other.getRawBit(); }

bool	Fixed::operator!=(const Fixed &other) const { return this->getRawBit() != other.getRawBit(); }


// static Fixed		&min(Fixed &num1, Fixed &num2) {
// 	if (num1 < num2)
// 		return num1;
// 	return num2;
// }

// static const Fixed	&min(const Fixed &num1, const Fixed &num2) {
// 	if (num1 < num2)
// 		return num1;
// 	return num2;
// }

// static Fixed		&max(Fixed &num1, Fixed &num2) {
// 	if (num1 > num2)
// 		return num1;
// 	return num2;
// }

// static const Fixed	&max(const Fixed &num1, const Fixed &num2) {
// 	if (num1 > num2)
// 		return num1;
// 	return num2;
// }

int		Fixed::getRawBit(void) const { return this->_FixedPointValue; }

void	Fixed::setRawBit(const int raw) { this->_FixedPointValue = raw; }

float	Fixed::toFloat(void) const { return (float)this->_FixedPointValue / (float)(1 << this->_NumberOfFractionalBits); }

int		Fixed::toInt(void) const { return this->_FixedPointValue >> this->_NumberOfFractionalBits; }

std::ostream	&operator<<(std::ostream &out, const Fixed &fixed) {
	out << fixed.toFloat();
	return out;
}
