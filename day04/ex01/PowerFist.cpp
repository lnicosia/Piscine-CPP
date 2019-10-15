/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 15:49:50 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/15 16:32:14 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(void): AWeapon("Power Fist", 8, 50)
{
	
}

PowerFist::PowerFist(PowerFist const &instance)
{
	*this = instance;
}

PowerFist &	PowerFist::operator=(PowerFist const &rhs)
{
    this->_name = rhs._name;
    this->_apCost = rhs._apCost;
    this->_damage = rhs._damage;
	return *this;
}

PowerFist::~PowerFist(void)
{
	
}

void            PowerFist::attack(void) const
{
    std::cout << "* pschhh... SBAM! *" << std::endl;
}