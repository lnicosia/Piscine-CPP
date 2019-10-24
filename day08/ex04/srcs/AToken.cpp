/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AToken.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 12:12:24 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/24 14:40:37 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AToken.hpp"

AToken::AToken(void): _content(""), _type(0)
{
	
}

AToken::AToken(std::string s, size_t type): _content(s), _type(type)
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
	_content = rhs._content;
    return *this;
}

std::string AToken::getContent(void) const
{
	return (this->_content);
}

size_t		AToken::getType(void) const
{
	return this->_type;
}