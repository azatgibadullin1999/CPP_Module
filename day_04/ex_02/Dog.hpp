/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 20:39:17 by root              #+#    #+#             */
/*   Updated: 2021/09/01 16:50:36 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {

	public :
		Dog(void);
		~Dog(void);
		Dog(Dog &dog);

		Dog	&operator=(Dog &dog);

		void	makeSound(void);

	private :
		Brain	*brain;

} ;

#endif