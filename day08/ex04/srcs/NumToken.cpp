/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NumToken.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 12:17:34 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/24 14:39:02 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NumToken.hpp"
#include <iostream>

NumToken::NumToken(void): AToken(), _value(0)
{
	
}

NumToken::NumToken(std::string s, int value): AToken(s, 0), _value(value)
{
	
}

NumToken::NumToken(NumToken const &instance): AToken(instance.getContent(), 0), _value(instance.getValue())
{
    
}

NumToken::~NumToken(void)
{
	
}

NumToken &	NumToken::operator=(NumToken const &rhs)
{
	_value = rhs._value;
    return *this;
}

void	NumToken::print(void) const
{
	std::cout << "Num(" << _value << ")";
}

int	NumToken::getValue(void) const
{
	return (this->_value);
}