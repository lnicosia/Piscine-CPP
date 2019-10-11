/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 17:00:05 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/11 17:12:53 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

void	ponyOnTheStack(void)
{
	Pony	pony1;
	std::cout << "Look, i'm on the stack!" << std::endl;
}

void	ponyOnTheHeap(void)
{
	Pony	*pony2 = new Pony();
	std::cout << "Look, i'm on the heap!" << std::endl;
	delete	pony2;
}

int		main(void)
{
	ponyOnTheStack();
	ponyOnTheHeap();
	return 0;
}
