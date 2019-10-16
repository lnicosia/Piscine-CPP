/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DeepCoreMiner.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 17:41:45 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/16 18:43:23 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DeepCoreMiner.hpp"

DeepCoreMiner::DeepCoreMiner(void)
{
	
}

DeepCoreMiner::DeepCoreMiner(DeepCoreMiner const &instance)
{
    *this = instance;
}

DeepCoreMiner::~DeepCoreMiner(void)
{
    
}

DeepCoreMiner &	DeepCoreMiner::operator=(DeepCoreMiner const &rhs)
{
	(void)rhs;
    return *this;
}

void	DeepCoreMiner::mine(IAsteroid* a)
{
	std::cout << "* mining deep ... got " << a->beMined(this) << " ! *" << std::endl;
}