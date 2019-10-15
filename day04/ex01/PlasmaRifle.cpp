/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 15:49:48 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/15 16:31:57 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void): AWeapon("Plasma Rifle", 5, 21)
{

}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &instance)
{
	*this = instance;
}

PlasmaRifle &	PlasmaRifle::operator=(PlasmaRifle const &rhs)
{
    this->_name = rhs._name;
    this->_apCost = rhs._apCost;
    this->_damage = rhs._damage;
	return *this;
}

PlasmaRifle::~PlasmaRifle(void)
{
	
}

void            PlasmaRifle::attack(void) const
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}