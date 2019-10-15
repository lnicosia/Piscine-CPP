/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 15:49:44 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/15 16:11:40 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(void)
{
	
}

Enemy::Enemy(int hp, std::string const & type): _hp(hp), _type(type)
{
	
}

Enemy::Enemy(Enemy const &instance)
{
	*this = instance;
}

Enemy &	Enemy::operator=(Enemy const &rhs)
{
	this->_hp = rhs._hp;
    this->_type = rhs._type;
    return *this;
}

Enemy::~Enemy(void)
{
	
}

void        Enemy::takeDamage(int damage)
{
    if (damage < 0)
        return ;
    if (damage >= this->_hp)
        this->_hp = 0;
    else
        this->_hp -= damage;
}

std::string	Enemy::getType(void) const
{
	return this->_type;
}

int	Enemy::getHP(void) const
{
	return this->_hp;
}

void	Enemy::setType(std::string type)
{
	this->_type = type;
}

void	Enemy::setHP(int hp)
{
	this->_hp = hp;
}