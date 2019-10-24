/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SubToken.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 12:34:15 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/24 16:41:30 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SubToken.hpp"

SubToken::SubToken(void): OpToken("-", 1, 2)
{
	
}

SubToken::SubToken(SubToken const &instance): OpToken(instance.getContent(), 1, instance.getPrecedence())
{
	
}

SubToken::~SubToken(void)
{
	
}

/*SubToken::SubToken(** replace parameters **)
{
	
}*/

SubToken &	SubToken::operator=(SubToken const &rhs)
{
	(void)rhs;
    return *this;
}

int		SubToken::op(int const & ghs, int const & rhs) const
{
	return ghs - rhs;
}