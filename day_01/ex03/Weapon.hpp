/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 14:11:57 by root              #+#    #+#             */
/*   Updated: 2021/08/31 13:08:16 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{

	public:
		Weapon(std::string type);
		~Weapon(void);

		std::string const	&getType(void);
		void				setType(std::string type);

	private:
		std::string	_type;

};

#endif