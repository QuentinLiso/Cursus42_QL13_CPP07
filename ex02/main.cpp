/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qliso <qliso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 12:11:20 by qliso             #+#    #+#             */
/*   Updated: 2025/05/02 09:41:20 by qliso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"
#include <cstdlib>
#define MAX_VAL 750

void    test1( void )
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
}

void    test2( void )
{
    Array<char> *arr = new Array<char>(17);
    try
    {
        (*arr)[14] = 'u';
        std::cout << "Arr[14] : " << (*arr)[14] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    Array<char> array(4);
    try
    {
        array[2] = 'z';
        std::cout << "Array[2] : " << array[2] << std::endl;
        array[5] = 'w';
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    Array<char> arrigato(array);
    std::cout << "Arrigato[2] : " << arrigato[2] << std::endl;
    arrigato[2] = 'a';
    std::cout << "Array[2] : " << array[2] << std::endl;
    std::cout << "Arrigato[2] : " << arrigato[2] << std::endl;

    delete arr;
}

void    test3( void )
{
    Array<int> *arr = new Array<int>();
    std::cout << "Arr size : " << arr->size() << std::endl;
    try 
    {
        (*arr)[0] = 5;
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try 
    {
        std::cout << (*arr)[0] << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    delete arr;
}

int    test4_subject( void )
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    std::srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = std::rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    std::cout << "Populating the array and the mirror worked !" << std::endl;
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return (1);
        }
    }
    std::cout << "Mirror worked" << std::endl;
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = std::rand();
    }
    delete [] mirror;
    return (0);
}


int main ( void )
{
    test1();
    test2();
    test3();
    test4_subject();
    return ( 0 );
}