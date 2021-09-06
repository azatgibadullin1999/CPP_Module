/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 18:42:38 by root              #+#    #+#             */
/*   Updated: 2021/09/01 16:46:54 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {
	
	public:
		Cat(void);
		~Cat(void);
		Cat(Cat &cat);

		Cat	&operator=(Cat &cat);

		virtual void	makeSound(void);

	private :
		Brain	*brain;
	
} ;

#endif