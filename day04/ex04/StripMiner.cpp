/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StripMiner.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 17:45:18 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/16 18:43:19 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "StripMiner.hpp"

StripMiner::StripMiner(void)
{
	
}

StripMiner::StripMiner(StripMiner const &instance)
{
    *this = instance;
}

StripMiner::~StripMiner(void)
{
	
}

StripMiner &	StripMiner::operator=(StripMiner const &rhs)
{
	(void)rhs;
    return *this;
}

void	StripMiner::mine(IAsteroid* a)
{
	std::cout << "* strip mining ... got " << a->beMined(this) << " ! *" << std::endl;
}