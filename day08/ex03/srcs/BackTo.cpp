/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BackTo.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 14:35:16 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/24 10:08:55 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BackTo.hpp"

BackTo::BackTo()
{
    
}

BackTo::BackTo(BackTo const & instance)
{
    *this = instance;
}

BackTo::~BackTo()
{
    
}

BackTo & BackTo::operator=(BackTo const &rhs)
{
    (void)rhs;
    return *this;
}

void    BackTo::execute(char *bytes, size_t & bytesIndex)
{
    std::cout << "]";
    if (!bytes[bytesIndex])
        return ;
}