/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OpToken.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 12:25:12 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/24 15:20:20 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OpToken.hpp"
#include <iostream>

OpToken::OpToken(void): AToken()
{
	
}

OpToken::OpToken(OpToken const &instance): AToken(instance.getContent(), instance.getType())
{
    
}

OpToken::~OpToken(void)
{
	
}

OpToken::OpToken(std::string s, size_t type, size_t precedence): AToken(s, type), _precedence(precedence)
{
	
}

OpToken &	OpToken::operator=(OpToken const &rhs)
{
	(void)rhs;
    return *this;
}

void	OpToken::print(void) const
{
	std::cout << "Op(" << this->getContent() << ")";
}

size_t	OpToken::getPrecedence(void) const
{
	return this->_precedence;
}