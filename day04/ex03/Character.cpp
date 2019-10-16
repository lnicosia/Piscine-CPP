/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 10:39:53 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/16 12:16:30 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void): _count(0)
{
}

Character::Character(Character const &instance)
{
	(void)instance;
}

Character::~Character(void)
{
	std::cout << this->_name << " died.." << std::endl;
}

Character::Character(std::string name)//: ICharacter(name)
{
	this->_name = name;
}

Character &	Character::operator=(Character const &rhs)
{
	this->_name = rhs._name;
    return *this;
}

void	Character::equip(AMateria* m)
{
    if (!m)
    {
        std::cout << "Please equip an existing materia" << std::endl;
        return ;
    }
    if (this->_count == 3)
    {
        std::cout << "Inventory is full" << std::endl;
        return ;
    }
    this->_materias[this->_count] = m;
}

void	Character::unequip(int idx)
{
	(void)idx;
}

void	Character::use(int idx, ICharacter& target)
{
	(void)idx;
    (void)target;
}

std::string const & Character::getName() const
{
    return this->_name;
}