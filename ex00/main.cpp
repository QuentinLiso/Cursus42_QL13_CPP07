/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qliso <qliso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 09:36:22 by qliso             #+#    #+#             */
/*   Updated: 2025/04/07 09:50:13 by qliso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "whatever.hpp"

// int main()
// {
//     int a = 10;
//     int b = 25;
//     std::cout << "A : " << a << std::endl;
//     std::cout << "B : " << b << std::endl;

//     swap(a, b);

//     std::cout << "A : " << a << std::endl;
//     std::cout << "B : " << b << std::endl;

//     std::cout << "min(A, B) : " << min(a, b) << std::endl;
//     std::cout << "max(A, B) : " << max(a, b) << std::endl;
//     return (0);
// }

int main( void ) {
    int a = 2;
    int b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    return 0;
    }