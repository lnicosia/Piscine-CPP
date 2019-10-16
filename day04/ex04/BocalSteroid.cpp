/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BocalSteroid.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 17:46:49 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/16 18:43:28 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BocalSteroid.hpp"

BocalSteroid::BocalSteroid(void)
{
	
}

BocalSteroid::BocalSteroid(BocalSteroid const &instance)
{
	*this = instance;
}

BocalSteroid::~BocalSteroid(void)
{
	
}

BocalSteroid &	BocalSteroid::operator=(BocalSteroid const &rhs)
{
	(void)rhs;
    return *this;
}

std::string	BocalSteroid::getName() const
{
	return "BocalSteroid";
}

std::string	BocalSteroid::beMined(DeepCoreMiner*) const
{
	return "Zazium";
}

std::string	BocalSteroid::beMined(StripMiner*) const
{
    return "Krpite";
}