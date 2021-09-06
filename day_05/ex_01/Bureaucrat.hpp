/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 11:33:25 by root              #+#    #+#             */
/*   Updated: 2021/09/01 17:14:33 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>

class Bureaucrat {

	public :
		Bureaucrat(std::string name, int grade);
		~Bureaucrat();
		Bureaucrat(Bureaucrat &bureaucrat);

		const std::string	getName(void) const;
		int					getGrade(void) const;

		void	increment(void);
		void	decrement(void);

		class GradeTooLowException : public std::exception {
			virtual const char	*what(void) const throw();
		} ;

		class GradeTooHighExeption : public std::exception{
			virtual const char	*what(void) const throw();
		} ;

	private :
		const std::string	_name;
		int					_grade;

} ;

std::ostream	&operator<<(std::ostream &out, Bureaucrat &bureaucrat);

#endif