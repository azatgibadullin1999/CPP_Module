/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 14:33:02 by root              #+#    #+#             */
/*   Updated: 2021/09/05 22:30:38 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) :
_weapon(weapon), _name(name) { }

HumanA::~HumanA(void) { }

void	HumanA::attack(void){
	std::cout << this->_name << " attaks with his " << this->_weapon.getType() << std::endl;
}