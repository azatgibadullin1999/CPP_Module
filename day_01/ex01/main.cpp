/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 10:34:22 by root              #+#    #+#             */
/*   Updated: 2021/08/31 10:37:53 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"
#include "ZombieHorde.cpp"

int	main(void) {
	int		numberOfZombie = 20;
	Zombie	*zombies;

	zombies = zombieHorde(numberOfZombie, "Name");
	delete [] zombies;
}