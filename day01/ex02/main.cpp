/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 17:21:48 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/11 18:04:16 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <ctime>
#include <iostream>

void	randomChump(void)
{
	int		rand;
	std::string	names[] = {"Zoutrok", "Barbouc", "Patrick"};

	std::srand(std::time(NULL));
	rand = std::rand() % (sizeof(names) / sizeof(std::string));
	Zombie	z = Zombie("random", names[rand]);
	z.announce();
}

int		main(void)
{
	Zombie		z;
	Zombie*		z2;
	ZombieEvent	event;

	std::cout << "Let's make a random zombie:" << std::endl;
	randomChump();
	std::cout << "Now let's make a classic stack zombie:" << std::endl;
	z = Zombie("Stack", "Jean-Classique");
	z.announce();
	std::cout << "And finally let's make a classic stack zombie:" << std::endl;
	event.setZombieType("Heap");
	z2 = event.newZombie("Mr.Heap");
	z2->announce();
	delete z2;
	return 0;
}
