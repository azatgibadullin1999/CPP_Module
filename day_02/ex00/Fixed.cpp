/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 21:28:28 by root              #+#    #+#             */
/*   Updated: 2021/09/05 23:33:24 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) {
	std::cout << "Default constructor called" << std::endl;
	this->_Fixed_point_value = 0;
}

Fixed::Fixed(const Fixed &fixed) {
	std::cout << "Copy constructor called" << std::endl;
	this->_Fixed_point_value = fixed._Fixed_point_value;
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
