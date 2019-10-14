/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 17:26:51 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/14 12:21:16 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include <ctime>

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

Zombie*	ZombieEvent::randomChump(void)
{
	int		rand;
	std::string	names[] = {"Zoutrok", "Barbouc", "Patrick"};

	std::srand(std::time(NULL));
	rand = std::rand() % (sizeof(names) / sizeof(std::string));
	Zombie	*z = new Zombie("random", names[rand]);
	z->announce();
	return z;
}

