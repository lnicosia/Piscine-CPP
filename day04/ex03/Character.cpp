/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 10:39:53 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/16 15:14:48 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void): _name("Noname"), _index(0)
{
    size_t i = 0;
    while (i < 4)
    {
        this->_materias[i] = 0;
        i++;
    }
    std::cout << "New unnamed character" << std::endl;
}

Character::Character(Character const &instance)
{
    this->_deleteMaterias();
    size_t i = 0;
    while (i < instance._index)
    {
        this->_materias[i] = instance._materias[i]->clone();
        i++;
    }
    this->_name = instance._name;
}

Character::~Character(void)
{
    this->_deleteMaterias();
	std::cout << this->_name << " died.." << std::endl;
}

Character::Character(std::string name): _name(name), _index(0)
{
    size_t i = 0;
    while (i < 4)
    {
        this->_materias[i] = 0;
        i++;
    }
    std::cout << "* A new character named " << this->_name << " appears *" << std::endl;
}

Character &	Character::operator=(Character const &rhs)
{
    this->_deleteMaterias();
	this->_name = rhs._name;
    return *this;
}

void    Character::_deleteMaterias()
{
    size_t  i = 0;
    while (i < this->_index)
    {
        delete this->_materias[i];
        i++;
    }
}

void	Character::equip(AMateria* m)
{
    if (!m)
    {
        std::cout << "Please equip an existing materia" << std::endl;
        return ;
    }
    if (this->_index == 3)
    {
        std::cout << "Inventory is full" << std::endl;
        return ;
    }
    this->_materias[this->_index] = m;
    std::cout << this->_name << " equiped " << m->getType() << " at inventory pos " << this->_index << std::endl;
    this->_index++;
}

void	Character::unequip(int idx)
{
    if (idx < 4)
        this->_materias[idx] = 0;
}

void	Character::use(int idx, ICharacter& target)
{
    if (idx < 4 && this->_materias[idx])
        this->_materias[idx]->use(target);
}

std::string const & Character::getName() const
{
    return this->_name;
}