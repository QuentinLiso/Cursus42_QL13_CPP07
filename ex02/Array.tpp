/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qliso <qliso@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 12:08:57 by qliso             #+#    #+#             */
/*   Updated: 2025/04/07 15:26:10 by qliso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template < typename T >
Array<T>::Array( void ) : Array( 0U )
{
    
}

template < typename T >
Array<T>::Array( unsigned int n ) : _size( n ), _values( new T[n] )
{
    for ( unsigned int i = 0U; i < n; i++ )
        this->_values[i] = T();
}

template < typename T >
Array<T>::Array( Array<T> const &c ) : _size( c._size ), _values( new T[c._size] )
{
    for ( unsigned int i = 0U; i < _size; i++ )
    this->_values[i] = c._values[i];
}

template < typename T >
Array<T>& Array<T>::operator=( Array<T> const &rhs )
{
    if (this != &rhs)
    {
        delete [] this->_values;
        this->_size = rhs._size;
        this->_values = new T[rhs._size];
        for (unsigned int i = 0U; i < _size; i++)
            this->_values[i] = rhs._values[i];
    }
    return ( *this );
}

template < typename T >
T& Array<T>::operator[]( unsigned int i )
{
    if (i >= this->_size)
        throw (std::out_of_range("You're out of bounds bro"));
    return ( this->_values[i] );
}

template < typename T >
unsigned int    Array<T>::size( void )
{
    return (this->_size);
}

template < typename T >
Array<T>::~Array( void )
{
    delete [] this->_values;
}