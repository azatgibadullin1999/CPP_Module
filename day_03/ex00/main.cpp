/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 17:48:31 by root              #+#    #+#             */
/*   Updated: 2021/08/31 17:56:22 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int	main(void) {
	ClapTrap	trap("Lionel messi");

	trap.attack("mbappe");
	trap.takeDamage(2000);
	trap.beRepaired(10);
	return 0;
}
