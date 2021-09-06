/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 19:21:50 by root              #+#    #+#             */
/*   Updated: 2021/08/30 19:40:38 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresedetialPardonForm::PresedetialPardonForm(std::string target) :
Form::Form("PresedetialPardonForm", 25, 5, target) { }

PresedetialPardonForm::~PresedetialPardonForm(void) { }

void	PresedetialPardonForm::beExecuted(void) const {
	std::cout << this->getTarget() << " was pardonned by Zafod Beeblebrox" << std::endl;
}
