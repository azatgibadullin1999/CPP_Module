/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 14:12:46 by root              #+#    #+#             */
/*   Updated: 2021/09/05 23:22:47 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>

class Karen {

	public :
		Karen(void);
		~Karen(void);

		void	complain(std::string level);

	private :
		static void		_info(void);
		static void		_error(void);
		static void		_debug(void);
		static void		_warning(void);
		void			(*_f[4])(void);
		std::string	_level[4];


} ;


#endif