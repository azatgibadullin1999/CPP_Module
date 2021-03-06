/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 16:20:22 by root              #+#    #+#             */
/*   Updated: 2021/09/05 21:54:09 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	if (argc <= 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 1;
	}
	for (int j = 1; j < argc; ++j)
	{
		for (int i = 0; argv[j][i]; ++i)
			std::cout << (char)std::toupper(argv[j][i]);
	}
	std::cout << std::endl;
	return 0;
}