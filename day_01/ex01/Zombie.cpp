/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 18:01:14 by root              #+#    #+#             */
/*   Updated: 2021/07/29 13:53:55 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void ) {
	Zombie::name = Zombie::NameRandomizer();
	std::cout << this->name << "is create" << std::endl;
}

Zombie::Zombie( std::string zombie_name) : name(zombie_name) {
	std::cout << this->name << "is create" << std::endl;
}

Zombie::~Zombie( void ) {
	std::cout << this->name << "is destroy" << std::endl;
}

void	Zombie::announce(void) {
	std::cout << this->name << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::resetName(std::string new_name) {
	this->name = new_name;
}

std::string	NameRandomizer(void) {
	std::string		dst;
	size_t			str_len;
	const char		alpha[] = 
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"abcdefghijklmnopqrstuvwxyz";

	str_len = std::rand() % 3 + 5;
	for(size_t i; i < str_len; ++i)
		dst = alpha[std::rand() % (sizeof(alpha) - 1)];
	return (dst);
}