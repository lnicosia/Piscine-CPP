/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DivToken.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 12:35:47 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/24 12:36:17 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DivToken.hpp"

DivToken::DivToken(void)
{
	
}

/*DivToken::DivToken(** replace parameters **)
{
	
}*/

DivToken::DivToken(DivToken const &instance): OpToken(instance.getChar())
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

void	DivToken::op(NumToken const & rhs)
{
	(void)rhs;
}