/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 15:53:20 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/15 16:35:46 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void): _ap(40)
{
	//std::cout << "New character." << std::endl;
}

Character::Character(std::string const & name): _name(name), _ap(40), _weapon(NULL)
{
	//std::cout << "New character." << std::endl;
}

Character::Character(Character const &instance)
{
	*this = instance;
    //std::cout << "New character." << std::endl;
}

Character &	Character::operator=(Character const &rhs)
{
	this->_name = rhs._name;
    this->_ap = rhs._ap;
    this->_weapon = rhs._weapon;
    return *this;
}

Character::~Character(void)
{
	//std::cout << "Character died." << std::endl;
}

std::string	Character::getName(void) const
{
	return this->_name;
}

int	Character::getAp(void) const
{
	return this->_ap;
}

AWeapon*	Character::getWeapon(void) const
{
	return this->_weapon;
}

void	Character::setName(std::string const & name)
{
	this->_name = name;
}

void	Character::setAp(int ap)
{
	this->_ap = ap;
}

void	Character::recoverAP(void)
{
	if (this->_ap <= 30)
        this->_ap += 10;
    else if (this->_ap > 30 && this->_ap < 40)
        this->_ap = 40;
}

void	Character::equip(AWeapon *weapon)
{
	this->_weapon = weapon;
}

void	Character::attack(Enemy *enemy)
{
    if (!this->_weapon)
        return ;
    std::cout << this->_name << " attacks " << enemy->getType() << " with a " << this->_weapon->getName() << std::endl;
    this->_weapon->attack();
    enemy->takeDamage(this->_weapon->getDamage());
    if (enemy->getHP() <= 0)
        delete enemy;
    this->_ap -= this->_weapon->getAPCost();
}

std::ostream&	operator<<(std::ostream &o, Character const &instance)
{
    if (instance.getWeapon())
    {
        std::cout << instance.getName();
        std::cout << " has " << instance.getAp();
        std::cout << " AP and wields a " << instance.getWeapon()->getName() << std::endl;
    }
    else
    {
        std::cout << instance.getName();
        std::cout << " has " << instance.getAp();
        std::cout << " AP and is unarmed" << std::endl;
    }
	return o;
}
