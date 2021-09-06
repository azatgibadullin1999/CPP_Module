/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 19:51:00 by root              #+#    #+#             */
/*   Updated: 2021/08/30 20:00:38 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
Form::Form("RobotomyRequestForm", 72, 45, target) { }

RobotomyRequestForm::~RobotomyRequestForm(void) { }

void	RobotomyRequestForm::beExecution(void) const {
	std::cout << "Brrrrrrrrrrrrr ........" << std::endl;
	if ((rand() % 2) == 1)
		std::cout << this->getTarget() << " has been robotomized" << std::endl;
	else
		std::cout << "robotomized faild" << std::endl;
}