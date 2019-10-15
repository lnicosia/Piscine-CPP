/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 15:49:52 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/15 16:08:40 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage): _name(name), _apCost(apcost), _damage(damage)
{
}

AWeapon::AWeapon(AWeapon const &instance)
{
	*this = instance;
}

AWeapon &	AWeapon::operator=(AWeapon const &rhs)
{
    this->_name = rhs._name;
    this->_apCost = rhs._apCost;
    this->_damage = rhs._damage;
	return *this;
}

AWeapon::~AWeapon(void)
{
	
}

std::string AWeapon::getName() const
{
	return this->_name;
}

int	        AWeapon::getAPCost() const
{
	return this->_apCost;
}

int	        AWeapon::getDamage() const
{
	return this->_damage;
}

void	    AWeapon::attack() const
{
	
}

AWeapon::AWeapon(void)
{
	
}

std::ostream&	operator<<(std::ostream &o, AWeapon const &instance)
{
    std::cout << instance.getName() << " <Damage= " << instance.getDamage() << ", Cost=" << instance.getAPCost() << ">";
	return o;
}