/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 16:20:22 by root              #+#    #+#             */
/*   Updated: 2021/07/13 17:26:29 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	if (argc <= 1)
		return 1;
	for (size_t j = 1; j < argc; ++j)
	{
		for (size_t i = 0; argv[j][i]; ++i)
			std::cout << (char)toupper(argv[j][i]);
	}
	std::cout << std::endl;
	return 0;
}