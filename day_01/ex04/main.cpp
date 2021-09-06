/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 15:28:01 by root              #+#    #+#             */
/*   Updated: 2021/08/31 13:38:04 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(int argc, char **argv) {
	std::string		str1;
	std::string		str2;
	std::string		replaceStr;
	std::string		fileName;
	std::ofstream	fileW;
	std::ifstream	fileR;
	int				i;

	if (argc != 4)
		return 1;
	if (!argv[2] || !argv[3])
		return 1;
	fileName = argv[1];
	fileR.open(fileName);
	str1 = argv[2];
	str2 = argv[3];
	fileR >> replaceStr;
	i = replaceStr.find(str1);
	if (i == -1)
		return 1;
	replaceStr.erase(i, str1.size());
	replaceStr.insert(i, str2);
	fileW.open(fileName + ".replace");
	fileW << replaceStr;
	return 0;
}