/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 18:47:04 by root              #+#    #+#             */
/*   Updated: 2021/09/01 16:46:01 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal::Animal() {
	this->brain = new Brain;
	this->_type = "Cat";
}

Cat::~Cat(void) {
	delete this->brain;
}

Cat::Cat(Cat &cat) : Animal::Animal(cat) { }

Cat	&Cat::operator=(Cat &cat) {
	Animal::operator=(cat);
	return *this;
}

void	Cat::makeSound(void) {
	std::cout << this->_type <<" say may " << std::endl;
}
