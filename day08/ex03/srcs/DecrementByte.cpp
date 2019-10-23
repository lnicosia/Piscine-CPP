/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DecrementByte.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 14:35:16 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/23 21:27:07 by lnicosia         ###   ########.fr       */
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
    //std::cout << "DecrementByte" << std::endl;
    bytes[bytesIndex]--;
}