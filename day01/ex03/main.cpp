/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 17:21:48 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/11 18:12:19 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
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
	return 0;
}
