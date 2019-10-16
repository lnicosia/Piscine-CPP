/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 10:34:02 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/16 11:56:05 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type): _type(type)
{
	
}

AMateria::AMateria()
{
    
}

AMateria::~AMateria()
{
	
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
	this->_xp += 10;
}