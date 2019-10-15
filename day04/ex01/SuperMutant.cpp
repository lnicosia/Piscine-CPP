/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 15:49:31 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/15 16:13:21 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void): Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &instance)
{
    *this = instance;
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant &	SuperMutant::operator=(SuperMutant const &rhs)
{
	this->_type = rhs._type;
    this->_hp = rhs._hp;
    return *this;
}
void        SuperMutant::takeDamage(int damage)
{
    damage -= 3;
    if (damage < 0)
        return ;
    if (damage >= this->_hp)
        this->_hp = 0;
    else
        this->_hp -= damage;
}

SuperMutant::~SuperMutant(void)
{
	std::cout << "Aaargh ..." << std::endl;
}