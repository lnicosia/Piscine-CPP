/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OpToken.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 12:25:12 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/24 12:30:35 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OpToken.hpp"
#include <iostream>

OpToken::OpToken(void)
{
	
}

OpToken::OpToken(OpToken const &instance): AToken(instance.getChar())
{
    
}

OpToken::~OpToken(void)
{
	
}

OpToken::OpToken(char c): AToken(c)
{
	
}

OpToken &	OpToken::operator=(OpToken const &rhs)
{
	(void)rhs;
    return *this;
}

void	OpToken::print(void) const
{
	std::cout << "Op(" << this->getChar() << ")";
}