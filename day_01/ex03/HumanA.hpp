/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 14:32:23 by root              #+#    #+#             */
/*   Updated: 2021/09/05 22:29:55 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanA {

	public :
		HumanA(std::string name, Weapon &weapon);
		~HumanA(void);

		void	attack(void);

	private :
		Weapon		&_weapon;
		std::string	_name;

};

#endif