/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 15:53:13 by root              #+#    #+#             */
/*   Updated: 2021/09/05 23:13:48 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void) {
	this->_level[0] = "DEBUG";
	this->_f[0] = Karen::_debug;
	this->_level[1] = "INFO";
	this->_f[1] = Karen::_info;
	this->_level[2] = "WARNING";
	this->_f[2] = Karen::_warning;
	this->_level[3] = "ERROR";
	this->_f[3] = Karen::_error;
}

Karen::~Karen(void) { }

void	Karen::complain(std::string level) {
	for (size_t	i = 0; i < 4; i++) {
		if (this->_level[i] == level)
			this->_f[i]();
	}
}

void	Karen::_debug(void) {
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Karen::_info(void) {
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Karen::_warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void	Karen::_error(void) {
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}
