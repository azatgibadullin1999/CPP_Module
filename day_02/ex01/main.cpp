/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 15:04:00 by root              #+#    #+#             */
/*   Updated: 2021/09/05 23:29:05 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int		main(void) {
	Fixed	num = (float)10.5;

	std::cout << num.toFloat() << std::endl;
	std::cout << num.toInt() << std::endl;
	return 0;
}