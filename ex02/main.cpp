/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qliso <qliso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 12:11:20 by qliso             #+#    #+#             */
/*   Updated: 2025/04/07 15:30:52 by qliso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main ( void )
{
    Array<int> *arr = new Array<int>(3);    
    try
    {
        (*arr)[2] = 2;
        std::cout << "Arr[2] : " << (*arr)[2] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    Array<int> array(3);
    try
    {
        array[1] = 6;
        std::cout << "Array[1] : " << array[1] << std::endl;
        array[3] = 18;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    Array<int> arrigato(array);
    std::cout << "Arrigato[1] : " << arrigato[1] << std::endl;
    arrigato[1] = 27;
    std::cout << "Array[1] : " << array[1] << std::endl;
    std::cout << "Arrigato[1] : " << arrigato[1] << std::endl;

    delete arr;
    return ( 0 );
}