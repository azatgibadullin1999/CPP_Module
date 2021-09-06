/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 21:00:45 by root              #+#    #+#             */
/*   Updated: 2021/07/19 18:19:10 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#include <iostream>
#include <iomanip>
#include <string>

typedef struct s_contact {
	std::string	first_name;
	std::string last_name;
	std::string	nick_name;
	std::string	phone_number;
	std::string darkest_secret;
}				t_contact;

class Phonebook {

public:
	Phonebook(void);
	~Phonebook(void);
	void	add(void);
	void	exit(void);
	void	search(void) const;

private:
	std::string	trimm_string(std::string str) const;
	int			number_of_contact;
	t_contact	contact[7];

};

#endif
