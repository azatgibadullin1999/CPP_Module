/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 20:41:35 by root              #+#    #+#             */
/*   Updated: 2021/09/01 16:46:16 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) {
	this->brain = new Brain;
	_type = "Dog";
}

Dog::~Dog(void) {
	delete this->brain;
}

Dog::Dog(Dog &dog) : Animal::Animal(dog) { }

Dog	&Dog::operator=(Dog &dog) {
	Animal::operator=(dog);
	return *this;
}

void	Dog::makeSound(void) {
	std::cout << _type << " say gav" << std::endl;
}
