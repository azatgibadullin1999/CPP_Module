/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 20:40:01 by root              #+#    #+#             */
/*   Updated: 2021/09/05 23:31:33 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class	Fixed {

	public :
		Fixed(void);
		Fixed(const Fixed &fixed);
		~Fixed(void);

		Fixed	&operator=(const Fixed &rvalue);
		Fixed	&operator=(const int &rvalue);

		int		getRawBit(void);
		void	setRawBit(int const rew);

	private :
		static const int	_Number_of_fractional_bits = 8;
		int					_Fixed_point_value;

} ;

#endif