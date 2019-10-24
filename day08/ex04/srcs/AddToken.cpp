/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AddToken.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 12:31:15 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/24 12:33:42 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AddToken.hpp"

AddToken::AddToken(void)
{
	
}

AddToken::AddToken(AddToken const &instance): OpToken(instance.getChar())
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

void	AddToken::op(NumToken const & rhs)
{
	(void)rhs;
}