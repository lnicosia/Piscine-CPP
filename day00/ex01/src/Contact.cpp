/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 14:52:53 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/11 10:45:46 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.hpp"

Contact::Contact(void) :  _first_name("")
{
	//std::cout << "New contact" << std::endl;
	return ;
}

Contact::~Contact(void)
{
	//std::cout << "Contact deleted" << std::endl;
	return ;
}

std::string	Contact::getFirstName(void) const
{
	return this->_first_name;
}

void		Contact::setFirstName(std::string s)
{
	this->_first_name = s;;
	return ;
}

std::string	Contact::getLastName(void) const
{
	return this->_last_name;
}

void		Contact::setLastName(std::string s)
{
	this->_last_name = s;;
	return ;
}

std::string	Contact::getNickname(void) const
{
	return this->_nickname;
}

void		Contact::setNickname(std::string s)
{
	this->_nickname = s;;
	return ;
}

std::string	Contact::getLogin(void) const
{
	return this->_login;
}

void		Contact::setLogin(std::string s)
{
	this->_login = s;;
	return ;
}

std::string	Contact::getAddress(void) const
{
	return this->_address;
}

void		Contact::setAddress(std::string s)
{
	this->_address = s;;
	return ;
}

std::string	Contact::getMail(void) const
{
	return this->_mail;
}

void		Contact::setMail(std::string s)
{
	this->_mail = s;;
	return ;
}

std::string	Contact::getPhone(void) const
{
	return this->_phone;
}

void		Contact::setPhone(std::string s)
{
	this->_phone = s;;
	return ;
}

std::string	Contact::getBirthday(void) const
{
	return this->_birthday;
}

void		Contact::setBirthday(std::string s)
{
	this->_birthday = s;;
	return ;
}

std::string	Contact::getFavoriteMeal(void) const
{
	return this->_favorite_meal;
}

void		Contact::setFavoriteMeal(std::string s)
{
	this->_favorite_meal = s;;
	return ;
}

std::string	Contact::getUnderwearColor(void) const
{
	return this->_underwear_color;
}

void		Contact::setUnderwearColor(std::string s)
{
	this->_underwear_color = s;;
	return ;
}

std::string	Contact::getSecret(void) const
{
	return this->_secret;
}

void		Contact::setSecret(std::string s)
{
	this->_secret = s;;
	return ;
}

void		Contact::getInfo(void) const
{
	std::cout << "First name: " << this->_first_name << std::endl;
	std::cout << "Last name: " << this->_last_name << std::endl;
	std::cout << "Nickname: " << this->_nickname << std::endl;
	std::cout << "Login: " << this->_login << std::endl;
	std::cout << "Address: " << this->_address << std::endl;
	std::cout << "Mail: " << this->_mail << std::endl;
	std::cout << "Phone" << this->_phone << std::endl;
	std::cout << "Birthday: " << this->_birthday << std::endl;
	std::cout << "Favorite meal: " << this->_favorite_meal << std::endl;
	std::cout << "Underwear color: " << this->_underwear_color << std::endl;
	std::cout << "Darkest secret: " << this->_secret << std::endl;
}
