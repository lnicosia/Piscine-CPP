/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 14:52:53 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/10 15:53:30 by lnicosia         ###   ########.fr       */
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
