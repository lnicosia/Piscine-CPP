/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AsteroBocal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 17:47:00 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/16 18:50:56 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AsteroBocal.hpp"

AsteroBocal::AsteroBocal(void)
{
	
}

AsteroBocal::AsteroBocal(AsteroBocal const &instance)
{
	*this = instance;
}

AsteroBocal::~AsteroBocal(void)
{
	
}

AsteroBocal &	AsteroBocal::operator=(AsteroBocal const &rhs)
{
	(void)rhs;
    return *this;
}

std::string	AsteroBocal::getName() const
{
	return "AsteroBocal";
}

std::string	AsteroBocal::beMined(DeepCoreMiner*) const
{
	return "Thorite";
}

std::string	AsteroBocal::beMined(StripMiner*) const
{
	return "Flavium";
}