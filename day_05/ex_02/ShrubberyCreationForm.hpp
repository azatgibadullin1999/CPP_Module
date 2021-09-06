/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 21:07:07 by root              #+#    #+#             */
/*   Updated: 2021/08/30 21:23:59 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP

# include "Form.hpp"
# include <iostream>
# include <fstream>

class ShrubberyCreationForm : public Form {

	public :
		ShrubberyCreationForm(std::string target);
		virtual ~ShrubberyCreationForm(void);

	private :
		void	beExecuted(void) const;

} ;

#endif
