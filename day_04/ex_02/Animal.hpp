/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 16:10:14 by root              #+#    #+#             */
/*   Updated: 2021/09/01 16:48:30 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal {

	public :
		Animal(void);
		virtual	~Animal(void);
		Animal(Animal &animal);

		Animal	&operator=(Animal &animal);

		virtual void	makeSound(void) = 0;

		std::string	gettType(void);

	protected :
		std::string	_type;

} ;

#endif