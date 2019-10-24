/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AddToken.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 12:31:15 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/24 16:41:09 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AddToken.hpp"

AddToken::AddToken(void): OpToken("+", 1, 2)
{
	
}

AddToken::AddToken(AddToken const &instance): OpToken(instance.getContent(), 1, instance.getPrecedence())
{
	
}

AddToken::~AddToken(void)
{
	
}

/*AddToken::AddToken(** replace parameters **)
{
	
}*/

AddToken &	AddToken::operator=(AddToken const &rhs)
{
	(void)rhs;
    return *this;
}

int		AddToken::op(int const & ghs, int const & rhs) const
{
	return ghs + rhs;
}