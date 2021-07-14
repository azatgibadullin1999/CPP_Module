/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 21:00:45 by root              #+#    #+#             */
/*   Updated: 2021/07/13 23:07:44 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#include <iostream>
#include <string>

class Phonebook {

public:
	Phonebook(void);
	~Phonebook(void);
	void	add(void);
	void	exit(void);
	void	search(void);

private:
	std::string	first_name[7];
	std::string last_name[7];
	std::string	nick_name[7];
	std::string	phone_number[7];
	std::string darkest_secret[7];
};

#endif
