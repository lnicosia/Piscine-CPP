/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 11:04:11 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/16 11:59:30 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void): AMateria("cure")
{
	
}

Cure::Cure(Cure const &instance)
{
	(void)instance;
}

Cure::~Cure(void)
{
	
}

Cure*       Cure::clone() const
{
    return new Cure(*this);
}

Cure &	Cure::operator=(Cure const &rhs)
{
	this->setXP(rhs.getXP());
    this->setType(rhs.getType());
    return *this;
}

void    Cure::use(ICharacter& target)
{
    AMateria::use(target);
    std::cout << "* heals " << target.getName() << " wounds *" << std::endl;
}