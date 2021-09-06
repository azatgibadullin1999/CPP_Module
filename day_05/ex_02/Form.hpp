/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 14:43:29 by root              #+#    #+#             */
/*   Updated: 2021/08/30 19:26:32 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class Form {

	public :
		Form(std::string name, int gradeToSign, int gradeToExecute, std::string target);
		~Form(void);

		std::string	getName(void) const;
		int			getGradeToSign(void) const;
		int			getGradeToExecute(void) const;
		bool		getStatus(void) const;
		std::string	getTarget(void) const;

		void		beSigned(const Bureaucrat &bureaucrat);

		class GradeTooLowException : public std::exception {
			virtual const char	*what(void) const throw();
		} ;

		class GradeTooHighException : public std::exception {
			virtual const char	*what(void) const throw();
		} ;

	private :
		const std::string	_name;
		const int			_gradeToSign;
		const int			_gradeToExecute;		
		bool				_status;
		const std::string	_target;

} ;

std::ostream	&operator<<(std::ostream &out, Form &form);

#endif