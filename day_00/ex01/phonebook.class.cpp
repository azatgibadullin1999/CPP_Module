/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larlena <larlena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 21:00:42 by root              #+#    #+#             */
/*   Updated: 2021/07/14 16:25:22 by larlena          ###   ########.fr       */
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
			<< (this->contact[i].first_name.size() > 10 ? this->contact[i].first_name. : "")
			<< this->contact[i].first_name.substr(0, 9)
			<< "|";
		std::cout
			<< std::setw(10)
			<< (this->contact[i].last_name.size() > 10 ? "." : "")
			<< this->contact[i].last_name.substr(0, 9)
			<< "|";
		std::cout
			<< std::setw(10)
			<< (this->contact[i].nick_name.size() > 10 ? "." : "")
			<< this->contact[i].nick_name.substr(0, 9)
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
