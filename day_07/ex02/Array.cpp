/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 17:03:53 by root              #+#    #+#             */
/*   Updated: 2021/09/13 18:36:18 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array(void) : _arrSize(0), _elements(nullptr) { }

template <typename T>
Array<T>::Array(size_t n) : _arrSize(n), _elements(new T[n]()) { }

// template <typename T>
// Array<T>::Array(const Array<T> &A) : _arrSize { }

template <typename T>
Array<T>::~Array(void) {
	delete [] this->_elements;
}

// Array<T>	Array<T>::operator=()

template <typename T>
T	&Array<T>::operator[](const size_t index) const {
	if (index >= this->size())
		throw Array<T>::ElementIsOutOfTheLimits();
	return this->_elements[index];
}

template <typename T>
size_t	Array<T>::size(void) const { return this->_arrSize; }

template <typename T>
const char	*Array<T>::ElementIsOutOfTheLimits::what(void) const throw() {
	return "This element is out of the array limits";
}