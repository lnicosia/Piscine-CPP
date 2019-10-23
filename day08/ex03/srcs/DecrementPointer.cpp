/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DecrementPointer.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 14:35:16 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/23 21:27:12 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DecrementPointer.hpp"

DecrementPointer::DecrementPointer()
{
    
}

DecrementPointer::DecrementPointer(DecrementPointer const & instance)
{
    *this = instance;
}

DecrementPointer::~DecrementPointer()
{
    
}

DecrementPointer & DecrementPointer::operator=(DecrementPointer const &rhs)
{
    (void)rhs;
    return *this;
}

void    DecrementPointer::execute(char *bytes, size_t & bytesIndex)
{
    //std::cout << "DecrementPointer" << std::endl;
    (void)bytes;
    bytesIndex--;
}