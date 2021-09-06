/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 22:12:39 by root              #+#    #+#             */
/*   Updated: 2021/08/31 18:54:27 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

# include <iostream>

class	ClapTrap {

	public :
		ClapTrap(std::string name);
		~ClapTrap(void);
		ClapTrap(const ClapTrap &old);

		ClapTrap	&operator=(ClapTrap &trap);

		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

	private :
		std::string		_Name;
		int				_Hitpoint;
		unsigned int	_Energy_point;
		unsigned int	_Attac_damage;

} ;

#endif