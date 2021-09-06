/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 22:41:38 by root              #+#    #+#             */
/*   Updated: 2021/09/05 22:46:31 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Karen.hpp"

int	main(void) {
	Karen		pajiloy_robot;
	std::string	level;

	for (;;) {
		std::cout << "write access level : ";
		std::cin >> level;
		pajiloy_robot.complain(level);
		std::cout << std::endl; 
	}
	return 0;
}