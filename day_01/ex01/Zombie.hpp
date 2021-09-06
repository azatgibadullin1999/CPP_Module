/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 18:00:09 by root              #+#    #+#             */
/*   Updated: 2021/07/29 14:17:19 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{

public:
	Zombie(void);
	Zombie(std::string zombie_name);
	~Zombie();
	void	announce(void);
	void	resetName(std::string new_name);

private:
	std::string	NameRandomizer(void);
	std::string	name;
	
};

#endif