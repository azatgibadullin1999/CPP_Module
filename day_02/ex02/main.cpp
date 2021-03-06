/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 15:04:00 by root              #+#    #+#             */
/*   Updated: 2021/09/06 00:06:18 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int	main() {
    Fixed a;
    Fixed const b(10);
    Fixed const c(42.42f);
    Fixed const d(b);

    a = Fixed(1234.4321f);
    
    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;

    if (c > b)
        std::cout << c << " is superior to " << b << std::endl << "c is superior to b" << std::endl;
    if (b < c)
        std::cout << b << " is inferior to " << c << std::endl << "b is inferior to c" << std::endl;
    if (b >= d)
        std::cout << b << " is sup or equal to " << d << std::endl << "b is sup or equal to d" << std::endl;
    if (c <= a)
        std::cout << c << " is infe or equal to " << a << std::endl << "a is infe or equal to c" << std::endl;
    if (b == d)
        std::cout << b << " is equal to " << d << std::endl << "b is equal to d" << std::endl;
    if (a != c)
        std::cout << a << " is different to " << c << std::endl << "a is equal to c" << std::endl;

    std::cout << "b + c = " << b + c << std::endl;
    std::cout << "c - b = " << c - b << std::endl;
    std::cout << "b * b = " << b * b << std::endl;
    std::cout << "b / b = " << b / b << std::endl;

    Fixed e;
    Fixed const f(Fixed(5.05f) * Fixed(2));
    std::cout << e << std::endl;
    std::cout << ++e << std::endl;
    std::cout << e << std::endl;
    std::cout << e++ << std::endl;
    std::cout << e << std::endl;

    std::cout << f << std::endl;
    // std::cout << Fixed::max(e, f) << std::endl;
    // std::cout << Fixed::min(e, f) << std::endl;
    // std::cout << Fixed::max(e, a) << std::endl;
    // std::cout << Fixed::min(e, a) << std::endl;

    Fixed h(48.6874f);
    Fixed j(Fixed(8.14f) * Fixed(2));
    std::cout << h << std::endl;
    std::cout << ++h << std::endl;
    std::cout << h << std::endl;
    std::cout << h++ << std::endl;
    std::cout << h << std::endl;

    std::cout << j << std::endl;
    
}