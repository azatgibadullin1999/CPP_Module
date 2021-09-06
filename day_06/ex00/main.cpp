/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 22:53:05 by root              #+#    #+#             */
/*   Updated: 2021/09/02 14:22:26 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	checkToValid(std::string str) {
	bool	num = false;
	bool	alpha = false;

	for (size_t i; i < str.length(); i++) {
		if (isdigit(str[i]))
			num = true;
		if (isalpha(str[i]))
			alpha = true;
		if ((num && alpha) && (str.length() != i && str[i] != 'f'))
			throw std::invalid_argument("invalid arg");
	}
}

void	convertToChar(std::string str) {
	try {
		char	c;

		std::cout << "char : ";
		checkToValid(str);
		c = static_cast<char>(std::stod(str));
		if (str == "nan" || str == "nanf" || str == "+inf" || str == "+inff" || str == "-inf" || str == "-inff") 
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

void	convertToInt(std::string str) {

}

void	convertToFloat(std::string str) {

}

void	convertToDouble(std::string str) {

}

int	main(int argc, char	**argv) {
	if (argc != 2) {
		std::cout << "Wrong argument" << std::endl;
		return 1;
	}
	std::string	str = argv[1];

	convertToChar(str);
	convertToInt(str);
	convertToFloat(str);
	convertToDouble(str);
}