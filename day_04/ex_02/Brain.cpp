/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 12:33:39 by root              #+#    #+#             */
/*   Updated: 2021/09/01 16:53:45 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {
	this->ideas = new std::string[100];
}

Brain::~Brain(void) {
	delete [] this->ideas;
}

Brain::Brain(Brain &brain) {
	this->ideas = brain.ideas;
}

Brain	&Brain::operator=(Brain &brain) {
	this->ideas = brain.ideas;
	return *this;
}
