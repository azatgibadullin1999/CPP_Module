/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 13:35:30 by larlena           #+#    #+#             */
/*   Updated: 2021/07/14 21:18:03 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.class.hpp"

void	execution_command(Phonebook *phonebook, std::string *input) {
	if (!input->compare("ADD"))
		phonebook->add();
	else if (!input->compare("SEARCH"))
		phonebook->search();
	else if (!input->compare("EXIT"))
		phonebook->exit();
}

int	main() {
	Phonebook	phonebook;
	std::string		input;

	for (;;) {
		std::cout << "enter command : ";
		std::cin >> input;
		execution_command(&phonebook, &input);
	}
	return 0;
}