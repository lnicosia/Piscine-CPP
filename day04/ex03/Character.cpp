/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 10:39:53 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/16 17:17:45 by lnicosia         ###   ########.fr       */
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

Character::Character(Character const &instance): _name(instance._name), _index(instance._index)
{
    this->_copyMaterias(instance);
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
    this->_copyMaterias(rhs);
	this->_name = rhs._name;
    this->_index = rhs._index;
    return *this;
}

void    Character::_deleteMaterias()
{
    size_t  i = 0;
    while (i < 4)
    {
        if (this->_materias[i])
            delete this->_materias[i];
        i++;
    }
}

void    Character::_copyMaterias(Character const &instance)
{
    size_t i = 0;
    while (i < 4)
    {
        if (instance._materias[i])
            this->_materias[i] = instance._materias[i]->clone();
        else
            this->_materias[i] = 0;
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
    if (idx < 0 || idx >= 4)
    {
        std::cout << "Invalid index" << std::endl;
        return ;
    }
    if (!this->_materias[idx])
    {
        std::cout << "No materia at this index" << std::endl;
        return ;
    }
    this->_materias[idx]->use(target);
}

std::string const & Character::getName() const
{
    return this->_name;
}

AMateria*  Character::getMateria(int idx) const
{
    if (idx < 0 || idx > 3)
    {
        std::cout << "Invalid index" << std::endl;
        return 0;
    }
    if (!this->_materias[idx])
    {
        std::cout << "No materia at index " << idx << std::endl;
        return 0;
    }
    return this->_materias[idx];
}