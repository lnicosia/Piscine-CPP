/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MulToken.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 12:35:09 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/24 16:41:23 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MulToken.hpp"

MulToken::MulToken(void): OpToken("*", 1, 3)
{
	
}

MulToken::MulToken(MulToken const &instance): OpToken(instance.getContent(), 1, instance.getPrecedence())
{
	
}

MulToken::~MulToken(void)
{
	
}

/*MulToken::MulToken(** replace parameters **)
{
	
}*/

MulToken &	MulToken::operator=(MulToken const &rhs)
{
	(void)rhs;
    return *this;
}

int		MulToken::op(int const & ghs, int const & rhs) const
{
	return ghs * rhs;
}