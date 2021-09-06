/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 22:18:39 by root              #+#    #+#             */
/*   Updated: 2021/08/31 19:01:20 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) :
	_Name(name), _Hitpoint(10), _Attac_damage(10), _Energy_point(10) {
	std::cout << "ClapTrap " << this->_Name << " is create" << std::endl;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "ClapTrap " << this->_Name << " is destroyed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &old) :
_Name(old._Name), _Hitpoint(old._Hitpoint), _Attac_damage(old._Attac_damage), _Energy_point(old._Energy_point) { }

ClapTrap	&ClapTrap::operator=(ClapTrap &trap) {
	this->_Name = trap._Name;
	this->_Hitpoint = trap._Hitpoint;
	this->_Attac_damage = trap._Attac_damage;
	this->_Energy_point = trap._Energy_point;
	return *this;
}

void	ClapTrap::attack(const std::string &target) {
	std::cout << this->_Name << " attac " << target << " for " << this->_Attac_damage << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	std::cout << this->_Name << " take damege " << amount << " Hitpoints" << std::endl;
	this->_Hitpoint -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	std::cout << this->_Name << " was repaired " << amount << " Hitpoints" << std::endl;
	this->_Hitpoint += amount;
}