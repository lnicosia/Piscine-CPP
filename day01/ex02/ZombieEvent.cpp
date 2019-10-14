/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 17:26:51 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/14 12:04:49 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void) : _type("classic")
{
	return ;
}

ZombieEvent::~ZombieEvent(void)
{
	return ;
}

void	ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
	return ;
}

Zombie*	ZombieEvent::newZombie(std::string name)
{
	Zombie	*z = new Zombie(this->_type, name);
	return z;
}
