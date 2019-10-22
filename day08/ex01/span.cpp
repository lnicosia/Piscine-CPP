/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 15:48:20 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/22 19:13:03 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <iostream>

Span::Span()
{
    
}

Span::Span(unsigned int N): _N(N)
{
    
}

Span::Span(Span const & instance)
{
    *this = instance;
}

Span::~Span()
{
    
}

Span & Span::operator=(Span const & rhs)
{
    this->_list = rhs._list;
    this->_N = rhs._N;
    return *this;
}

void    Span::addNumber(int nb)
{
    if (this->_list.size() >= this->_N)
        throw std::exception();
    this->_list.push_back(nb);
    this->_list.sort();
}

void    Span::addNumber(std::list<int>::iterator start, std::list<int>::iterator end)
{
    int size = std::distance(start, end);
    if (size < 0 || this->_list.size() + size > this->_N)
    {
        std::cout << "Error, given parameter size = " << size;
        std::cout << ", available place = " << this->_N - this->_list.size();
        std::cout << " (Max = " << this->_N;
        std::cout << ", current size = " << this->_list.size() << ")" << std::endl;
        return ;
    }
    this->_list.insert(this->_list.end(), start, end);
}

int    Span::longestSpan() const
{
    // std::cout << "front = " << this->_list.front() << std::endl;
    // std::cout << "back = " << this->_list.back() << std::endl;
    return (this->_list.back() - this->_list.front());
}

int     Span::shortestSpan() const
{
    int res = this->longestSpan();
    std::list<int>::const_iterator   it = this->_list.begin();
    std::list<int>::const_iterator   ite = --this->_list.end();
    while (it != ite)
    {
        int v1 = *it;
        int v2 = *(++it);
        if (v2 < v1)
            continue;
        if (res > v2 - v1)
            res = v2 - v1;
    }
    return res;
}

void    Span::printContent() const
{
    std::list<int>::const_iterator   it = this->_list.begin();
    std::list<int>::const_iterator   ite = this->_list.end();
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    // size_t  i, size;
    // i = 0, size = this->_list.size();
    // std::cout << "--Printing--" << std::endl << "size = " << size << std::endl;
    /*std::list<int>::const_iterator   it = this->_list.begin();
    while (i < size)
    {
        std::cout << "i = " << i << " value = " << *it << std::endl;
        i++;
        *it++;
    }*/
}