/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 21:15:40 by root              #+#    #+#             */
/*   Updated: 2021/08/30 21:27:21 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
Form::Form("ShrubberyCreationForm", 145, 137, target) { }

ShrubberyCreationForm::~ShrubberyCreationForm(void) { }

void	ShrubberyCreationForm::beExecuted(void) const {
	std::ofstream	file;
	std::string		file_name = this->getTarget() + "_shrubbery";

	file.open(file_name, std::ios::out);
	if (file.is_open()) {
		file << "          .     .  .      +     .      .          ." << std::endl;
		file << "     .       .      .     #       .           ." << std::endl;
		file << "        .      .         ###            .      .      ." << std::endl;
		file << "      .      .   \"#:. .:##\"##:. .:#\"  .      ." << std::endl;
		file << "          .      . \"####\"###\"####\"  ." << std::endl;
		file << "       .     \"#:.    .:#\"###\"#:.    .:#\"  .        .       ." << std::endl;
		file << "  .             \"#########\"#########\"        .        ." << std::endl;
		file << "        .    \"#:.  \"####\"###\"####\"  .:#\"   .       ." << std::endl;
		file << "     .     .  \"#######\"\"##\"##\"\"#######\"                  ." << std::endl;
		file << "                .\"##\"#####\"#####\"##\"           .      ." << std::endl;
		file << "    .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     ." << std::endl;
		file << "      .     \"#######\"##\"#####\"##\"#######\"      .     ." << std::endl;
		file << "    .    .     \"#####\"\"#######\"\"#####\"    .      ." << std::endl;
		file << "            .     \"      000      \"    .     ." << std::endl;
		file << "       .         .   .   000     .        .       ." << std::endl;
		file << ".. .. ..................O000O........................ ...... ..." << std::endl;
		file.close();
	}
}