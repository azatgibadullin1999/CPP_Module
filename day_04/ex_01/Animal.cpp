/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 16:09:59 by root              #+#    #+#             */
/*   Updated: 2021/09/01 16:40:10 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) { }

Animal::~Animal(void) { }

Animal::Animal(Animal &animal) : Animal::Animal() {
	this->_type = animal._type;
}

Animal	&Animal::operator=(Animal &animal) {
	this->_type = animal._type;
	return *this;
}


void		Animal::makeSound(void) {
	std::cout << " " << std::endl;
}

std::string	Animal::gettType(void) {
	return this->_type;
}
