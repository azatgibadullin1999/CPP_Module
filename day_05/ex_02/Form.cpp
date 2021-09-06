/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 15:07:20 by root              #+#    #+#             */
/*   Updated: 2021/08/30 19:26:44 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int gradeToSign, int gradeToExecute, std::string target) :
_name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute), _status(false), _target(target) {
	if (this->_gradeToSign < 1 || this->_gradeToExecute < 1)
		throw Form::GradeTooHighException();
	if (this->_gradeToSign > 150 || this->_gradeToExecute > 150)
		throw Form::GradeTooLowException();
}

Form::~Form(void) { }

std::string	Form::getName(void) const {
	return this->_name;
}

int			Form::getGradeToSign(void) const {
	return this->_gradeToSign;
}

int			Form::getGradeToExecute(void) const {
	return this->_gradeToExecute;
}

bool		Form::getStatus(void) const {
	return this->_status;
}

std::string	Form::getTarget(void) const {
	return this->_target;
}

void		Form::beSigned(const Bureaucrat &bureaucrat) {
	if (this->_gradeToSign < bureaucrat.getGrade())
		throw Form::GradeTooLowException();
	this->_status = true;
}

const char	*Form::GradeTooLowException::what() const throw() {
	std::cout << "Grade is too low" << std::endl;
}

const char	*Form::GradeTooHighException::what() const throw() {
	std::cout << "Grade is too high" << std::endl;
}

std::ostream	&operator<<(std::ostream &out, Form &form) {
	out << form.getName() << " is ";
	out << form.getStatus() ? "signed" : "unsigned";
	out	<< std::endl;
	return out;
}