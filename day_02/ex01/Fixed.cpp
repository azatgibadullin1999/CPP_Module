/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 21:28:28 by root              #+#    #+#             */
/*   Updated: 2021/09/05 23:37:50 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _Fixed_point_value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num) : _Fixed_point_value(num << _Number_of_fractional_bits) {
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float num) {
	std::cout << "Float constructor called" << std::endl;
	this->_Fixed_point_value = round(num * (1 << this->_Number_of_fractional_bits));
}

Fixed::Fixed(const Fixed &fixed) : _Fixed_point_value(fixed._Fixed_point_value) {
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &rvalue) {
	std::cout << "Assignation operator called" << std::endl;
	this->_Fixed_point_value = rvalue._Fixed_point_value;
	return *this;
}

Fixed	&Fixed::operator=(const int &rvalue) {
	std::cout << "Assignation operator called" << std::endl;
	this->_Fixed_point_value = rvalue;
	return *this;
}

int		Fixed::getRawBit(void) {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_Fixed_point_value;
}

void	Fixed::setRawBit(const int raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_Fixed_point_value = raw;
}

float	Fixed::toFloat(void) const {
	return (float)this->_Fixed_point_value / (float)(1 << this->_Number_of_fractional_bits);
}

int		Fixed::toInt(void) const {
	return this->_Fixed_point_value >> this->_Number_of_fractional_bits;
}