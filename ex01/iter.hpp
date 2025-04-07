/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qliso <qliso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 09:56:15 by qliso             #+#    #+#             */
/*   Updated: 2025/04/07 11:57:41 by qliso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <cstdlib>

template < typename T >
void    iter(T array[], size_t arr_size, void (*f)(T&))
{
    size_t i = 0;
    while (i < arr_size)
        f(array[i++]);
}

template < typename T >
void    iter(const T array[], size_t arr_size, void (*f)(const T&))
{
    size_t i = 0;
    while (i < arr_size)
        f(array[i++]);
}

template < typename T >
void    print(const T& c)
{
    std::cout << c << " ";
}

template < typename T >
void    increment(T& i)
{
    i++;
}

template < typename T >
void    tester(T array[], size_t arr_size)
{
    iter(array, arr_size, &print);
    std::cout << std::endl;
    iter(array, arr_size, &increment);
    iter(array, arr_size, &print);
    std::cout << std::endl;  
}

#endif