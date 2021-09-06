/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 14:33:00 by root              #+#    #+#             */
/*   Updated: 2021/08/31 10:43:14 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) { }

HumanB::~HumanB(void) { }

void	HumanB::attack(void){
	std::cout << this->_name << " attaks with his " << this->_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon) {
	HumanB::_weapon = &weapon;
}