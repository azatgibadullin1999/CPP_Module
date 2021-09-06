/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 20:40:01 by root              #+#    #+#             */
/*   Updated: 2021/08/15 15:35:57 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <math.h>
# include <iostream>

class	Fixed {

public :
	Fixed(void);
	Fixed(const int num);
	Fixed(const float num);
	Fixed(const Fixed &fixed);
	~Fixed(void);

	Fixed	&operator=(const Fixed &rvalue);
	Fixed	&operator=(const int &rvalue);

	int		getRawBit(void);
	void	setRawBit(int const rew);

	float	toFloat(void) const;
	int		toInt(void) const;

private :
	static const int	_Number_of_fractional_bits = 8;
	int					_Fixed_point_value;

} ;

#endif