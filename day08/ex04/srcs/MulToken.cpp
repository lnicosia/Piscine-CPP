/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MulToken.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 12:35:09 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/24 12:35:33 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MulToken.hpp"

MulToken::MulToken(void)
{
	
}

MulToken::MulToken(MulToken const &instance): OpToken(instance.getChar())
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

void	MulToken::op(NumToken const & rhs)
{
	(void)rhs;
}