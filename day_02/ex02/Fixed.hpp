/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 20:40:01 by root              #+#    #+#             */
/*   Updated: 2021/09/06 00:06:13 by root             ###   ########.fr       */
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
		Fixed	operator+(const Fixed &other) const;
		Fixed	operator-(const Fixed &other) const;
		Fixed	operator*(const Fixed &other) const;
		Fixed	operator/(const Fixed &other) const;
		Fixed	&operator++(void);
		Fixed	operator++(int);
		Fixed	&operator--(void);
		Fixed	operator--(int);

		bool	operator>(const Fixed &other) const;
		bool	operator<(const Fixed &other) const;
		bool	operator>=(const Fixed &other) const;
		bool	operator<=(const Fixed &other) const;
		bool	operator==(const Fixed &other) const;
		bool	operator!=(const Fixed &other) const;

		// static Fixed		&max(Fixed &num1, Fixed &num2);
		// static Fixed		&min(Fixed &num1, Fixed &num2);
		// static const Fixed	&max(const Fixed &num1, const Fixed &num2);
		// static const Fixed	&min(const Fixed &num1, const Fixed &num2);

		int		getRawBit(void) const;
		void	setRawBit(int const rew);

		float	toFloat(void) const;
		int		toInt(void) const;

	private :
		static const int	_NumberOfFractionalBits = 8;
		int					_FixedPointValue;

} ;

std::ostream	&operator<<(std::ostream &out, const Fixed &fixed);

#endif