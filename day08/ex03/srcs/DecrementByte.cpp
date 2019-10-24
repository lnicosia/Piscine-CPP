/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DecrementByte.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 14:35:16 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/24 11:36:31 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DecrementByte.hpp"

DecrementByte::DecrementByte()
{
    
}

DecrementByte::DecrementByte(DecrementByte const & instance)
{
    *this = instance;
}

DecrementByte::~DecrementByte()
{
    
}

DecrementByte & DecrementByte::operator=(DecrementByte const &rhs)
{
    (void)rhs;
    return *this;
}

void    DecrementByte::execute(char *bytes, size_t & bytesIndex)
{
    //std::cout << "-";
    //std::cout << "DecrementByte" << std::endl;
    bytes[bytesIndex]--;
}