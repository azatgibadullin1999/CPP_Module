/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 14:11:53 by root              #+#    #+#             */
/*   Updated: 2021/08/31 13:07:48 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) { }

Weapon::~Weapon(void) { }

std::string const	&Weapon::getType(void) {
	return this->_type;
}

void				Weapon::setType(std::string type) {
	this->_type = type;
}