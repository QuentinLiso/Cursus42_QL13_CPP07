/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qliso <qliso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 11:58:31 by qliso             #+#    #+#             */
/*   Updated: 2025/04/07 12:53:36 by qliso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>

template < typename T >
class   Array
{
    private:
        unsigned int    _size;
        T*              _values;
        
    public:
        Array( void );
        Array( unsigned int n );
        Array( Array const &c );
        Array& operator=( Array const &rhs );
        virtual ~Array( void );

        T&  operator[]( unsigned int i );
        unsigned int    size( void );
};

# include "Array.tpp"
#endif