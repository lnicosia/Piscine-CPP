/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 17:56:51 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/15 17:56:51 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"
#include <iostream>

TacticalMarine::TacticalMarine(TacticalMarine const &instance)
{
	*this = instance;
    std::cout << "Tactical Marine ready for battle" << std::endl;
}

TacticalMarine &	TacticalMarine::operator=(TacticalMarine const &rhs)
{
    (void)rhs;
	return *this;
}

TacticalMarine::~TacticalMarine(void)
{
    std::cout << "Aaargh ..." << std::endl;
}

TacticalMarine::TacticalMarine(void)
{
    std::cout << "Tactical Marine ready for battle" << std::endl;
}

ISpaceMarine*   TacticalMarine::clone() const
{
    return new TacticalMarine(*this);
}

void            TacticalMarine::battleCry() const
{
    std::cout << "For the holy PLOT !" << std::endl;
}

void            TacticalMarine::rangedAttack() const
{
    std::cout << "* attacks with bolter *" << std::endl;
}

void            TacticalMarine::meleeAttack() const
{
    std::cout << "* attacks with chainsword *" << std::endl;
}