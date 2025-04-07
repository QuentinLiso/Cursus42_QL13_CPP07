/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qliso <qliso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 09:36:22 by qliso             #+#    #+#             */
/*   Updated: 2025/04/07 10:47:03 by qliso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

void    test1( void )
{
    float arr[] = {17.3f, 55.2234f, 0.0f, 11111111111.0f};
    tester( arr, 4 );
}

void    test2( void )
{
    char    arr[] = "qwertyuiop";
    tester( arr, 11);
}

void    test3( void )
{
    int     arr[] = {2147483645, 2147483640, 3, 2, 1};
    tester( arr, 5 );
}


int main( void )
{
    test1();
    test2();
    test3();
    return 0;
}