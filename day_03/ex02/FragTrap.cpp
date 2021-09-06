/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 18:39:24 by root              #+#    #+#             */
/*   Updated: 2021/08/31 19:50:09 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	std::cout << "Frag Trap " << this->_Name << " create" << std::endl;
	this->_Hitpoint = 100;
	this->_Energy_point = 100;
	this->_Attac_damage = 30;
}

FragTrap::~FragTrap(void) {
	std::cout << "Frag Trap " << this->_Name << " destroy" << std::endl;
}

FragTrap::FragTrap(FragTrap &trap) : ClapTrap::ClapTrap(trap) { }

FragTrap	&FragTrap::operator=(FragTrap &trap) {
	ClapTrap::operator=(trap);
	return *this;
}


void	FragTrap::highFivesGuys(void) {
	std::cout << "Frag Trap " << this->_Name << " hight five" << std::endl;
}