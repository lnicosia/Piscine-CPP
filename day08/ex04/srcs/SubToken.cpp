/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SubToken.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 12:34:15 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/24 12:34:57 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SubToken.hpp"

SubToken::SubToken(void)
{
	
}

SubToken::SubToken(SubToken const &instance): OpToken(instance.getChar())
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

void	SubToken::op(NumToken const & rhs)
{
	(void)rhs;
}