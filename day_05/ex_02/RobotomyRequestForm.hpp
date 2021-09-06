/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 19:41:44 by root              #+#    #+#             */
/*   Updated: 2021/08/30 19:55:27 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_HPP
# define ROBOTOMY_REQUEST_FORM_HPP

# include <iostream>
# include "Form.hpp"

class RobotomyRequestForm : public Form {

	public :
		RobotomyRequestForm(std::string target);
		virtual ~RobotomyRequestForm(void);

	private :
		void	beExecution(void) const;

} ;

#endif