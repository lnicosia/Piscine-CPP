/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ByteOut.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 14:35:16 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/23 21:27:03 by lnicosia         ###   ########.fr       */
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
    //std::cout << "ByteOut \'";
    std::cout << bytes[bytesIndex];// << "\'" << std::endl;
}