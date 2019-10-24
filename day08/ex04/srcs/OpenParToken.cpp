/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OpenParToken.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 14:15:52 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/24 16:39:49 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OpenParToken.hpp"
#include <iostream>

OpenParToken::OpenParToken(void): OpToken("(", 2, 0)
{
	
}

OpenParToken::OpenParToken(OpenParToken const &instance): OpToken(instance.getContent(), 2, 0)
{
	
}

OpenParToken::~OpenParToken(void)
{
	
}

/*OpenParToken::OpenParToken(** replace parameters **)
{
	
}*/

OpenParToken &	OpenParToken::operator=(OpenParToken const &rhs)
{
	(void)rhs;
    return *this;
}

void	OpenParToken::print(void) const
{
	std::cout << "OpenPar";
}

int		OpenParToken::op(int const & ghs, int const & rhs) const
{
	(void)rhs;
    (void)ghs;
    return 0;
}