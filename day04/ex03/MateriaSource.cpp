/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 12:16:53 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/16 12:19:58 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource(void)
{
	
}

MateriaSource::MateriaSource(MateriaSource const &instance)
{
	(void)instance;
}

MateriaSource::~MateriaSource(void)
{
	
}

MateriaSource &	MateriaSource::operator=(MateriaSource const &rhs)
{
	(void)rhs;
    return *this;
}

void	MateriaSource::learnMateria(AMateria*)
{
	
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
    AMateria *m;
    if (!type.compare("ice"))
	    m = new Ice();
    else if (!type.compare("cure"))
        m = new Cure();
    else
        return 0;
    return m;
}