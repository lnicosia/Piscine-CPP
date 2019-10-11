/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 16:55:37 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/11 17:11:20 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>

Pony::Pony(void)
{
	std::cout << "New Pony!" << std::endl;
	return ;
}

Pony::~Pony(void)
{
	std::cout << ":rip: pony :'(" << std::endl;
	return ;
}
