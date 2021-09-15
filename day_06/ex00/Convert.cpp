/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 18:03:34 by root              #+#    #+#             */
/*   Updated: 2021/09/14 19:57:38 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(void) { }

Convert::Convert(const Convert &C) { }

Convert::~Convert(void) { }

Convert	&Convert::operator=(const Convert &rv) { return *this; }


double	Convert::toIntermediate(const std::string num) {
	double intermediate;

	try {
		if (num.length() == 1)
			intermediate = static_cast<double>(num[0]);
		else
			intermediate = static_cast<double>(std::stod(num));
	} catch (std::exception &e) { throw Convert::ConvertImpossible(); }
}

char	Convert::toChar(double num) {
	char	dst;

	dst = static_cast<char>(num);
	if (std::isnan(num) || std::isinf(num))
		throw std::string("impossible");
	else if (!std::isprint(dst))
		throw std::string("Non displayable");
	return dst;
}

int		Convert::toInt(double num) {
	int		dst;

	dst = static_cast<int>(num);
	if (std::isnan(num) || std::isinf(num))
		throw std::string("impossible");
	return dst;
}

float	Convert::toFloat(double num) { return static_cast<float>(num); }

double	Convert::toDouble(double num) { return static_cast<double>(num); }

const char	*Convert::ConvertImpossible::what() const throw() { return "Can't be Converted"; }