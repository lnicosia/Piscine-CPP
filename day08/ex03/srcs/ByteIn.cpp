/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ByteIn.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 14:35:16 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/24 10:09:48 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ByteIn.hpp"

ByteIn::ByteIn()
{
    
}

ByteIn::ByteIn(ByteIn const & instance)
{
    *this = instance;
}

ByteIn::~ByteIn()
{
    
}

ByteIn & ByteIn::operator=(ByteIn const &rhs)
{
    (void)rhs;
    return *this;
}

void    ByteIn::execute(char *bytes, size_t & bytesIndex)
{
    std::cout << ",";
    //std::cout << "ByteInt" << std::endl;
    std::cin >> bytes[bytesIndex];
}