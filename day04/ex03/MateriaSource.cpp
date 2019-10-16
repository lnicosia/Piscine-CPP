/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 12:16:53 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/16 16:36:26 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource(void): _index(0)
{
    size_t i = 0;
    while (i < 4)
    {
        this->_materias[i] = 0;
        i++;
    }
	std::cout << "Materia source created" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const &instance): _index(instance._index)
{
	this->_copyMaterias(instance);
    std::cout << "Materia source created" << std::endl;
}

MateriaSource::~MateriaSource(void)
{
    this->_deleteMaterias();
	std::cout << "Materia source deleted" << std::endl;
}

MateriaSource &	MateriaSource::operator=(MateriaSource const &rhs)
{
    this->_deleteMaterias();
    this->_index = rhs._index;
    this->_copyMaterias(rhs);
    return *this;
}

void    MateriaSource::_copyMaterias(MateriaSource const &instance)
{
    size_t i = 0;
    while (i < 4)
    {
        if (instance._materias[i])
            this->_materias[i] = instance._materias[i]->clone();
        i++;
    }
}

void    MateriaSource::_deleteMaterias()
{
    size_t i = 0;
    while (i < 4)
    {
        if (this->_materias[i])
            delete this->_materias[i];
        i++;
    }
    this->_index = 0;
}

void	MateriaSource::learnMateria(AMateria* m)
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
    std::cout << "Learning materia.." << std::endl;
    this->_materias[this->_index] = m->clone();
    std::cout << this->_materias[this->_index]->getType() << " learnt." << std::endl;
    this->_index++;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
    size_t i = 0;
    while (i <= this->_index)
    {
        if (!type.compare(this->_materias[i]->getType()))
            return this->_materias[i]->clone();
        i++;
    }
    return 0;
}