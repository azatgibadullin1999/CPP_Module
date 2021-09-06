/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 11:49:08 by root              #+#    #+#             */
/*   Updated: 2021/09/01 17:14:11 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighExeption();
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat() { }

Bureaucrat::Bureaucrat(Bureaucrat &bureaucrat) :
_name(bureaucrat.getName()), _grade(bureaucrat.getGrade()) { }


const std::string	Bureaucrat::getName(void) const {
	return this->_name;
}

int					Bureaucrat::getGrade(void) const {
	return this->_grade;
}


void	Bureaucrat::increment(void) {
	--this->_grade;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighExeption();
}

void	Bureaucrat::decrement(void) {
	++this->_grade;
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

const char	*Bureaucrat::GradeTooLowException::what() const throw() {
	std::cout << "Grade is too low" << std::endl;
}


const char	*Bureaucrat::GradeTooHighExeption::what() const throw() {
	std::cout << "Grade is too high" << std:: endl;
}

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &bureaucrat) {
	return out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
}
