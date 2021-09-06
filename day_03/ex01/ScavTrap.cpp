/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 15:40:54 by root              #+#    #+#             */
/*   Updated: 2021/08/31 19:53:29 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << "Scav Trap " << this->_Name << " create" << std::endl;
	this->_Hitpoint = 100;
	this->_Energy_point = 50;
	this->_Attac_damage = 20;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "Scav Trap " << this->_Name << " destroy" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &trap) : ClapTrap(trap) { }

ScavTrap	&ScavTrap::operator=(ScavTrap &trap) {
	ClapTrap::operator=(trap);
	return *this;
}


void	ScavTrap::guardGate(void) {
	std::cout << "Scav Trap " << this->_Name << " have enterred in Gate keeper mode" << std::endl;
}
