/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 22:53:05 by root              #+#    #+#             */
/*   Updated: 2021/09/15 00:19:06 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Convert.hpp"

int	main(int argc, char	**argv) {
	if (argc != 2)
		return 1;
	std::string arg = argv[1];
	Convert		conv;
	double		num;

	try {
		num = conv.toIntermediate(arg);
	}
	catch (std::exception &e) {
		std::cout << "Error : " << e.what() << std::endl;
		return 1;
	}
	try {
		std::cout << conv.toChar(num) << std::endl;
	}
}