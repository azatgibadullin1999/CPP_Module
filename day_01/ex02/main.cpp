/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 13:55:40 by root              #+#    #+#             */
/*   Updated: 2021/07/29 14:08:53 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main() {
	std::string string = "HI THIS IS BRAIN";
	std::string &stringREF = string;
	std::string *stringPTR;

	stringPTR = &string;
	std::cout << "string addres in memory : " << stringPTR << std::endl;
	std::cout << "string addres in memory : " << &stringREF << std::endl;

	std::cout << "string : " << *stringPTR << std::endl;
	std::cout << "string : " << stringREF << std::endl;

	return 0;
}