/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 19:57:07 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/22 20:44:58 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

template < typename T >
MutantStack<T>::MutantStack(): std::stack<T>()
{
    
}

template < typename T >
MutantStack<T>::~MutantStack()
{
    
}

/******* ITERATOR PART *******/

template < typename T>
MutantStack<T>::iterator::iterator()
{
    
}

template < typename T>
MutantStack<T>::iterator::~iterator()
{
    
}

template < typename T >
typename MutantStack<T>::iterator   MutantStack<T>::begin()
{
    return MutantStack<T>::iterator();
}

template < typename T >
typename MutantStack<T>::iterator   MutantStack<T>::end()
{
    return MutantStack<T>::iterator();
}

template < typename T >
typename MutantStack<T>::iterator   MutantStack<T>::begin() const
{
    return MutantStack<T>::iterator();
}

template < typename T >
typename MutantStack<T>::iterator   MutantStack<T>::end() const
{
    return MutantStack<T>::iterator();
}

template < typename T>
typename MutantStack<T>::iterator &  MutantStack<T>::iterator::operator++()
{
    return *this;
}

template < typename T >
typename MutantStack<T>::iterator &  MutantStack<T>::iterator::operator--()
{
    return *this;
}

template < typename T >
bool    MutantStack<T>::iterator::operator!=(MutantStack<T>::iterator const & rhs) const
{
    (void)rhs;
    return true;
}

template < typename T>
MutantStack<T> &  MutantStack<T>::iterator::operator*()
{
    MutantStack<T>* mt = new MutantStack<T>();
    return *mt;
}

template < typename T >
std::ostream & operator<<(std::ostream & o, MutantStack<T> const & instance)
{
    (void)instance;
    return o;
}