/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 16:20:45 by root              #+#    #+#             */
/*   Updated: 2021/08/31 19:37:22 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class	FragTrap : public ClapTrap {

	public :
		FragTrap(std::string name);
		~FragTrap(void);
		FragTrap(FragTrap &trap);

		FragTrap	&operator=(FragTrap &trap);

		void	highFivesGuys(void);

} ;

#endif