/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 12:22:27 by root              #+#    #+#             */
/*   Updated: 2021/09/01 16:53:34 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain {

	public :
		Brain(void);
		~Brain(void);
		Brain(Brain &brain);

		Brain	&operator=(Brain &brain);

	protected :
		std::string	*ideas;
} ;

#endif