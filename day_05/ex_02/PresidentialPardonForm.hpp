/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 19:12:51 by root              #+#    #+#             */
/*   Updated: 2021/08/30 19:37:22 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESEDETIAL_PARDON_FORM_HPP
# define PRESEDETIAL_PARDON_FORM_HPP

# include <iostream>
# include <exception>
# include "Form.hpp"

class PresedetialPardonForm : public Form {
	
	public :
		PresedetialPardonForm(std::string target);
		virtual	~PresedetialPardonForm(void);

	private :
		void	beExecuted(void) const;

} ;

#endif