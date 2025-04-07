/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qliso <qliso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 09:37:34 by qliso             #+#    #+#             */
/*   Updated: 2025/04/07 09:48:29 by qliso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template < typename T >
void   swap(T& x, T& y)
{
    T  buf;

    buf = x;
    x = y;
    y = buf;
}

template < typename T >
T   min(T& x, T& y)
{
    return (x < y ? x : y);
}

template < typename T >
T   max(T& x, T& y)
{
    return (x > y ? x : y);
}

#endif