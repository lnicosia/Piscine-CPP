/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 17:56:42 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/15 17:56:44 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"
#include <iostream>

AssaultTerminator::AssaultTerminator(AssaultTerminator const &instance)
{
	*this = instance;
    std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator &	AssaultTerminator::operator=(AssaultTerminator const &rhs)
{
	(void)rhs;
    return *this;
}

AssaultTerminator::~AssaultTerminator(void)
{
	std::cout << "I’ll be back ..." << std::endl;
}

AssaultTerminator::AssaultTerminator(void)
{
	std::cout << "* teleports from space *" << std::endl;
}

ISpaceMarine*   AssaultTerminator::clone() const
{
    return new AssaultTerminator(*this);
}

void            AssaultTerminator::battleCry() const
{
    std::cout << "This code is unclean. PURIFY IT !" << std::endl;
}

void            AssaultTerminator::rangedAttack() const
{
    std::cout << "* does nothing *" << std::endl;
}

void            AssaultTerminator::meleeAttack() const
{
    std::cout << "* attacks with chainfists *" << std::endl;
}