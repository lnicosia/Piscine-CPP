/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 17:26:10 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/15 21:14:00 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include <iostream>

Squad::Squad(void): _count(0), _marines(nullptr)
{
	std::cout << "* New marine squad *" << std::endl;
}

void    Squad::_deleteMarines()
{
    int i = 0;
    while (i < this->_count)
    {
        delete this->_marines[i];
        i++;
    }
}

void    Squad::_copySquad(Squad const &instance)
{
    int i = 0;
    while (i < this->_count && i < instance._count)
    {
        this->_marines[i] = instance._marines[i]->clone();
        i++;
    }
}

Squad::Squad(Squad const &instance)
{
	//*this = instance;
    this->_count = instance._count;
    this->_marines = new ISpaceMarine*[this->_count];
    this->_copySquad(instance);
    std::cout << "* New marine squad *" << std::endl;
}

Squad &	Squad::operator=(Squad const &rhs)
{
    std::cout << "* Duplicating squad *" << std::endl;
    std::cout << "count = " << this->_count << std::endl;
    this->_deleteMarines();
    delete []   this->_marines;
    this->_marines = new ISpaceMarine* [rhs._count];
    int i = 0;
    while (i < rhs._count)
    {
        std::cout << "i =" << i << std::endl;
        this->_marines[i] = rhs._marines[i]->clone();
        i++;
    }
	this->_count = rhs._count;
    return *this;
}

Squad::~Squad(void)
{
    std::cout << "* Destroying marine squad *" << std::endl;
    this->_deleteMarines();
    if (this->_count > 0)
        delete []   this->_marines;
    std::cout << "* Marine squad destroyed *" << std::endl;
}

int             Squad::getCount() const
{
    return this->_count;
}

ISpaceMarine*   Squad::getUnit(int n) const
{
    if (n > this->_count || n < 0)
        return 0;
    return this->_marines[n];
}

int             Squad::push(ISpaceMarine* marine)
{
    if (!marine)
    {
        std::cout << "Please add an existing marine" << std::endl;
        return this->_count;
    }
    int i = 0;
    while (i < this->_count)
    {
        if (this->_marines[i] == marine)
        {
            std::cout << "This marine is already in the squad" << std::endl;
            return this->_count;
        }
        i++;
    }
    ISpaceMarine**  new_tab = new ISpaceMarine*[this->_count + 1];
    i = 0;
    while (i < this->_count)
    {
        new_tab[i] = this->_marines[i];
        i++;
    }
    new_tab[i] = marine;
    if (this->_count > 0)
        delete [] this->_marines;
    this->_marines = new_tab;
    this->_count++;
    std::cout << "A marine joined the squad.";
    std::cout << " We now have " << this->_count << " into the squad." << std::endl;
    return this->_count;
}