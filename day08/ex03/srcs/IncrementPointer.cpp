/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IncrementPointer.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 14:35:16 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/23 21:27:18 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IncrementPointer.hpp"

IncrementPointer::IncrementPointer()
{
    
}

IncrementPointer::IncrementPointer(IncrementPointer const & instance)
{
    *this = instance;
}

IncrementPointer::~IncrementPointer()
{
    
}

IncrementPointer & IncrementPointer::operator=(IncrementPointer const &rhs)
{
    (void)rhs;
    return *this;
}

void    IncrementPointer::execute(char *bytes, size_t & bytesIndex)
{
    //std::cout << "IncrementPointer" << std::endl;
    (void)bytes;
    bytesIndex++;
}