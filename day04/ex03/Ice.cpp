/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 11:03:42 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/16 11:59:32 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void): AMateria("ice")
{
	
}

Ice::Ice(Ice const &instance)
{
	(void)instance;
}

Ice::~Ice(void)
{
	
}

Ice*       Ice::clone() const
{
    return new Ice(*this);
}

Ice &	Ice::operator=(Ice const &rhs)
{
	this->setXP(rhs.getXP());
    this->setType(rhs.getType());
    return *this;
}

void    Ice::use(ICharacter& target)
{
    AMateria::use(target);
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}