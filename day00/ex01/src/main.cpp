/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 14:23:19 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/10 16:57:02 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.hpp"

void	print_contact_list(Contact contacts[8], int count)
{
	int		i;

	std::cout << "Contacts list:" << std::endl;
	i = 0;
	while (i < count)
	{
		std::cout  << i + 1 << "         |";
		if (contacts[i].getFirstName().size() <= 10)
		{
			std::cout << contacts[i].getFirstName();
		}
		else
			std::cout << contacts[i].getFirstName().substr(0, 9) << ".|";
		i++;
		std::cout << std::endl;
	}
	std::cout << "Which contact's secret do you want to know?" << std::endl;
}

int		ask_command(Contact contacts[8], int *count)
{
	std::string	command;
	std::string	buff;

	std::cout << "What to do???" << std::endl;
	std::cin >> command;
	if (!command.compare("ADD"))
	{
		if (*count == 7)
		{
			std::cout << "We are very sorry but Phonebook2000 is full" << std::endl;
			return 0;
		}
		std::cout << "Adding new contact.." << std::endl;
		std::cout << "First name?" << std::endl;
		std::cin >> buff;
		contacts[*count].setFirstName(buff);
		std::cout << "Last name?" << std::endl;
		std::cin >> buff;
		contacts[*count].setLastName(buff);
		(*count)++;
	}
	else if (!command.compare("SEARCH"))
	{
		if (!*count)
		{
			std::cout << "Contact list is empty" << std::endl;
			return 0;
		}
		print_contact_list(contacts, *count);
	}
	else if (!command.compare("EXIT"))
		return 1;
	else
		std::cout << "Invalid command" << std::endl;
	return 0;
}

int		main(void)
{
	int		count = 0;
	Contact	contacts[8];

	while (ask_command(contacts, &count) == 0)
	{
	}
	return 0;
}
