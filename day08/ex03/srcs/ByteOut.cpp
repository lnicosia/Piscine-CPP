/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ByteOut.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 14:35:16 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/24 11:36:34 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ByteOut.hpp"

ByteOut::ByteOut()
{
    
}

ByteOut::ByteOut(ByteOut const & instance)
{
    *this = instance;
}

ByteOut::~ByteOut()
{
    
}

ByteOut & ByteOut::operator=(ByteOut const &rhs)
{
    (void)rhs;
    return *this;
}

void    ByteOut::execute(char *bytes, size_t & bytesIndex)
{
    //std::cout << ".";
    //std::cout << "ByteOut \'";
    std::cout << bytes[bytesIndex];// << "\'" << std::endl;
}