/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DivToken.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 12:35:47 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/24 16:41:17 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DivToken.hpp"

DivToken::DivToken(void): OpToken("/", 1, 3)
{
	
}

/*DivToken::DivToken(** replace parameters **)
{
	
}*/

DivToken::DivToken(DivToken const &instance): OpToken(instance.getContent(), 1, instance.getPrecedence())
{
	
}

DivToken::~DivToken(void)
{
	
}

DivToken &	DivToken::operator=(DivToken const &rhs)
{
	(void)rhs;
    return *this;
}

int		DivToken::op(int const & ghs, int const & rhs) const
{
	return ghs / rhs;
}