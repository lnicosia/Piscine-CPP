/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IncrementByte.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 14:35:16 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/23 21:27:15 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IncrementByte.hpp"

IncrementByte::IncrementByte()
{
    
}

IncrementByte::IncrementByte(IncrementByte const & instance)
{
    *this = instance;
}

IncrementByte::~IncrementByte()
{
    
}

IncrementByte & IncrementByte::operator=(IncrementByte const &rhs)
{
    (void)rhs;
    return *this;
}

void    IncrementByte::execute(char *bytes, size_t & bytesIndex)
{
    //std::cout << "IncrementByte" << std::endl;
    bytes[bytesIndex]++;
}