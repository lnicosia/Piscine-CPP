/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 11:22:19 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/15 12:29:04 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void)
{
	std::cout << this->_name << ", " << this->_title << ", is born !" << std::endl;
}

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
    std::cout << this->_name << ", " << this->_title << ", is born !" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &instance)
{
    *this = instance;
    std::cout << this->_name << ", " << this->_title << ", is born !" << std::endl;
}

Sorcerer &	Sorcerer::operator=(Sorcerer const &rhs)
{
    this->_name = rhs._name;
    this->_title = rhs._title;
    return *this;
}

Sorcerer::~Sorcerer(void)
{
    std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same !" << std::endl;	
}

std::string	Sorcerer::getTitle(void) const
{
	return this->_title;
}

std::string	Sorcerer::getName(void) const
{
	return this->_name;
}

void	Sorcerer::polymorph(Victim const & victim) const
{
    victim.getPolymorphed();
}

std::ostream&	operator<<(std::ostream &o, Sorcerer const &instance)
{
	std::cout << "I am " << instance.getName() << ", " << instance.getTitle() << ", and I like ponies !" << std::endl;
    return o;
}

void	Sorcerer::setName(std::string name)
{
	this->_name = name;
}

void	Sorcerer::setType(std::string title)
{
	this->_title = title;
}