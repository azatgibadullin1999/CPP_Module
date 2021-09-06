/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 23:49:43 by root              #+#    #+#             */
/*   Updated: 2021/09/03 10:18:56 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename t>
void	iter(t array, size_t lenght, void (*f)(const t)) {
	for (size_t	i = 0; i < lenght; i++)
		f(t[i]);
}

#endif