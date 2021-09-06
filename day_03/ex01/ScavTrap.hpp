/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 23:04:41 by root              #+#    #+#             */
/*   Updated: 2021/08/31 19:37:47 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap {

	public :	
		ScavTrap(std::string name);
		~ScavTrap(void);
		ScavTrap(ScavTrap &trap);

		ScavTrap	&operator=(ScavTrap &trap);

		void	guardGate(void);

} ;

#endif