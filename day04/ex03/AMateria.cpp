/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 10:34:02 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/16 17:19:03 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type): _type(type)
{
	//std::cout << "New " << this->_type << " materia created!" << std::endl;
}

AMateria::AMateria(): _type("default"), _xp(0)
{
    //std::cout << "New " << this->_type << " materia created!" << std::endl;
}

AMateria::~AMateria()
{
	//std::cout << this->_type << " destroyed.." << std::endl;
}

AMateria::AMateria(AMateria const &instance)
{
	*this = instance;
}

AMateria &	AMateria::operator=(AMateria const &rhs)
{
    this->_type = rhs._type;
    this->_xp = rhs._xp;
	return *this;
}

unsigned int        AMateria::getXP() const
{
    return this->_xp;
}

std::string const & AMateria::getType() const
{
    return this->_type;
}

void	AMateria::setType(std::string type)
{
	this->_type = type;
}

void	AMateria::setXP(unsigned int xp)
{
	this->_xp = xp;
}

void	AMateria::use(ICharacter& target)
{
	(void)target;
    std::cout << "10XP gained!" << std::endl;
	this->_xp += 10;
}