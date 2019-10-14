/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 14:23:19 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/14 10:09:39 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.hpp"

void	print_contact_list(Contact contacts[8], int count)
{
	int			i;
	int			choice;
	std::string	spaces = "          ";

	std::cout << "Contacts list:" << std::endl;
	i = 0;
	while (i < count)
	{
		std::cout  << i + 1 << "         |";
		if (contacts[i].getFirstName().size() <= 10)
		{
			std::cout << contacts[i].getFirstName();
			std::cout << spaces.substr(0, 10 - contacts[i].getFirstName().size()) << "|";
		}
		else
			std::cout << contacts[i].getFirstName().substr(0, 9) << ".|";
		if (contacts[i].getLastName().size() <= 10)
		{
			std::cout << contacts[i].getLastName();
			std::cout << spaces.substr(0, 10 - contacts[i].getLastName().size()) << "|";
		}
		else
			std::cout << contacts[i].getLastName().substr(0, 9) << ".|";
		if (contacts[i].getNickname().size() <= 10)
		{
			std::cout << contacts[i].getNickname();
			std::cout << spaces.substr(0, 10 - contacts[i].getNickname().size());
		}
		else
			std::cout << contacts[i].getNickname().substr(0, 9) << ".";
		i++;
		std::cout << std::endl;
	}
	std::cout << "Which contact's secret do you want to know?" << std::endl;
	std::cin >> choice;
	while (std::cin.fail() || choice < 1 || choice > count)
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Please enter and integer between 1 and " << count << std::endl;
		std::cin >> choice;
	}
	contacts[choice - 1].getInfo();
	return ;
}

int		ask_command(Contact contacts[8], int *count)
{
	std::string	buff;

	std::cout << "What to do???" << std::endl;
	std::getline(std::cin, buff);
	if (!std::cin.good())
		return 0;
	if (!buff.compare("ADD"))
	{
		if (*count == 8)
		{
			std::cout << "We are very sorry but Phonebook2000 is full" << std::endl;
			return 0;
		}
		std::cout << "Adding new contact.." << std::endl;
		std::cout << "First name?" << std::endl;
		std::cin.ignore();
		std::getline(std::cin, buff);
		contacts[*count].setFirstName(buff);
		std::cout << "Last name?" << std::endl;
		std::getline(std::cin, buff);
		contacts[*count].setLastName(buff);
		std::cout << "Nickname?" << std::endl;
		std::getline(std::cin, buff);
		contacts[*count].setNickname(buff);
		std::cout << "Login?" << std::endl;
		std::getline(std::cin, buff);
		contacts[*count].setLogin(buff);
		std::cout << "Address?" << std::endl;
		std::getline(std::cin, buff);
		contacts[*count].setAddress(buff);
		std::cout << "Mail?" << std::endl;
		std::getline(std::cin, buff);
		contacts[*count].setMail(buff);
		std::cout << "Phone?" << std::endl;
		std::getline(std::cin, buff);
		contacts[*count].setPhone(buff);
		std::cout << "Birthday?" << std::endl;
		std::getline(std::cin, buff);
		contacts[*count].setBirthday(buff);
		std::cout << "Favorite meal?" << std::endl;
		std::getline(std::cin, buff);
		contacts[*count].setFavoriteMeal(buff);
		std::cout << "Underwear color?" << std::endl;
		std::getline(std::cin, buff);
		contacts[*count].setUnderwearColor(buff);
		std::cout << "Secret?" << std::endl;
		std::getline(std::cin, buff);
		contacts[*count].setSecret(buff);
		(*count)++;
	}
	else if (!buff.compare("SEARCH"))
	{
		if (!*count)
		{
			std::cout << "Contact list is empty" << std::endl;
			return 0;
		}
		print_contact_list(contacts, *count);
	}
	else if (!buff.compare("EXIT"))
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
