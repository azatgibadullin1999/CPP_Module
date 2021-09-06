/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 14:24:42 by root              #+#    #+#             */
/*   Updated: 2021/08/31 10:42:37 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanB {

	public :
		HumanB(std::string name);
		~HumanB(void);

		void	attack(void);
		void	setWeapon(Weapon &weapon);

	private :
		Weapon		*_weapon;
		std::string	_name;

};

#endif