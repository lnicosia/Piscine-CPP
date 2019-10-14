/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 17:21:48 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/14 12:21:52 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <iostream>

int		main(void)
{
	Zombie		z;
	Zombie*		z2;
	Zombie*		z3;
	ZombieEvent	event;

	std::cout << "Let's make a stack zombie:" << std::endl;
	z = Zombie("Stack", "Jean-Classique");
	z.announce();
	std::cout << "Now let's make a heap zombie:" << std::endl;
	event.setZombieType("Heap");
	z2 = event.newZombie("Mr.Heap");
	z2->announce();
	std::cout << "Finally let's make a random zombie:" << std::endl;
	z3 = event.randomChump();
	delete z2;
	delete z3;
	return 0;
}
