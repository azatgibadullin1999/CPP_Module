/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 14:09:05 by root              #+#    #+#             */
/*   Updated: 2021/09/02 14:47:15 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>

class Convert {

	public :
		Convert(std::string str);
		~Convert(void);

		

	private :
		bool	isNotDisplayable;
		bool	isIpmosible;
		bool	isValid;

}

#endif