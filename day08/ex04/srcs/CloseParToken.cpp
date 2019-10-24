/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CloseParToken.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 14:17:49 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/24 16:39:49 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CloseParToken.hpp"
#include <iostream>

CloseParToken::CloseParToken(void): OpToken(")", 3, 0)
{
	
}

CloseParToken::CloseParToken(CloseParToken const &instance): OpToken(instance.getContent(), 3, 0)
{
	
}

CloseParToken::~CloseParToken(void)
{
	
}

/*CloseParToken::CloseParToken(** replace parameters **)
{
	
}*/

CloseParToken &	CloseParToken::operator=(CloseParToken const &rhs)
{
	(void)rhs;
    return *this;
}

void	CloseParToken::print(void) const
{
	std::cout << "ClosePar";
}

int		CloseParToken::op(int const & ghs, int const & rhs) const
{
	(void)rhs;
    (void)ghs;
    return 0;
}