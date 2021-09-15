/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 18:03:37 by root              #+#    #+#             */
/*   Updated: 2021/09/14 19:54:02 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <cfloat>
# include <cmath>

class Convert {
	
	public :
		Convert(void);
		Convert(const Convert &c);
		~Convert(void);

		Convert &operator=(const Convert &rv);

		double	toIntermediate(std::string num);
		double	toDouble(double num);
		float	toFloat(double num);
		char	toChar(double num);
		int		toInt(double num);

		class ConvertImpossible : public std::exception {
			const char *what() const throw();
		} ;

} ;

#endif