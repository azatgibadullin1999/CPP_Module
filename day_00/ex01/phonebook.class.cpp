/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 21:00:42 by root              #+#    #+#             */
/*   Updated: 2021/07/14 21:09:13 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.class.hpp"

Phonebook::Phonebook(void) {
	this->number_of_contact = -1;
}

Phonebook::~Phonebook(void) {
	return ; 
}

void	Phonebook::add(void) {
	if (this->number_of_contact != 6)
		++this->number_of_contact;
	std::cout << "enter first name : ";
	std::cin >> this->contact[this->number_of_contact].first_name;
	std::cout << "enter last name : ";
	std::cin >> this->contact[this->number_of_contact].last_name;
	std::cout << "enter nickname : ";
	std::cin >> this->contact[this->number_of_contact].nick_name;
	std::cout << "enter phone number : ";
	std::cin >> this->contact[this->number_of_contact].phone_number;
	std::cout << "enter darkest secret : ";
	std::cin >> this->contact[this->number_of_contact].darkest_secret;
}

void	Phonebook::search(void) {
	char	buf;
	int		index;

	for (size_t i = 0; i <= this->number_of_contact; ++i) {
		std::cout << std::setw(9) << i << "|";
		std::cout
			<< std::setw(10)
			<< this->trimm_string(this->contact[i].first_name)
			<< "|";
		std::cout
			<< std::setw(10)
			<< this->trimm_string(this->contact[i].last_name)
			<< "|";
		std::cout
			<< std::setw(10)
			<< this->trimm_string(this->contact[i].nick_name)
			<< "|" << std::endl;

	}
	std::cin >> index;
	if (index <= number_of_contact && index >= 0) {
		std::cout << index << std::endl;
		std::cout << this->contact[index].first_name << std::endl;
		std::cout << this->contact[index].last_name << std::endl;
		std::cout << this->contact[index].nick_name << std::endl;
	}
	else
		std::cout << "ti huilan" << std::endl;
}

void	Phonebook::exit(void) {
	std::exit(0);
}

std::string	Phonebook::trimm_string(std::string str) {
	std::string	dst;

	dst = str.substr(0, 10);
	if (str.size() > 10)
		dst[9] = '.';
	return dst;
}