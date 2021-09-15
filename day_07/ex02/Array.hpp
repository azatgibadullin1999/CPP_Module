/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 16:18:10 by root              #+#    #+#             */
/*   Updated: 2021/09/13 18:30:45 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>

template <typename T>
class Array {

	public :
		Array(void);
		Array(size_t n);
		Array(const Array &A);
		~Array(void);

		Array	&operator=(const Array &rv);
		T		&operator[](const size_t index) const;

		size_t	size(void) const;
		

		class ElementIsOutOfTheLimits : public std::exception {
			const char	*what() const throw();
		}

	private :
		size_t	_arrSize;
		T				*_elements;

} ;

#endif