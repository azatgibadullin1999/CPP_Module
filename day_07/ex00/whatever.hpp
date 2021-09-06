/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 23:40:36 by root              #+#    #+#             */
/*   Updated: 2021/09/02 23:51:04 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename t>
void	swap(t &smth1, t &smth2) {
	t	buf;

	buf = smth1;
	smth1 = smth2;
	smth2 = buf;
}

template <typename t>
t	&min(t &smth1, t &smth2) {
	if (smth1 < smth2)
		return smth1;
	return smth2;
}

template <typename t>
t	&max(t &smth1, t &smth2) {
	if (smth1 > smth2)
		return smth1;
	return smth2;
}

#endif