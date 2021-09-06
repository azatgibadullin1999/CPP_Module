/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 16:10:14 by root              #+#    #+#             */
/*   Updated: 2021/09/01 16:42:28 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal {

	public :
		Animal(void);
		virtual ~Animal(void);
		Animal(Animal &animal);

		Animal	&operator=(Animal &animal);

		void		makeSound(void);

		std::string	gettType(void);

	protected :
		std::string	_type;

} ;

#endif