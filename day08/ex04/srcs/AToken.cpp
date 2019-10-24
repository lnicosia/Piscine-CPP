/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AToken.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 12:12:24 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/24 12:24:52 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AToken.hpp"

AToken::AToken(void): _c(' ')
{
	
}

AToken::AToken(char c): _c(c)
{
	
}

AToken::AToken(AToken const &instance)
{
	*this = instance;
}

AToken::~AToken(void)
{
	
}

AToken &	AToken::operator=(AToken const &rhs)
{
	_c = rhs._c;
    return *this;
}

char	AToken::getChar(void) const
{
	return (this->_c);
}