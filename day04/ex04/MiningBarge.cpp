/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MiningBarge.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 17:49:42 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/16 18:56:23 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MiningBarge.hpp"

MiningBarge::MiningBarge(void): _index(0)
{
	size_t  i = 0;
    while (i < 4)
    {
        this->_lasers[i] = 0;
        i++;
    }
    std::cout << "New barge." << std::endl;
}

MiningBarge::MiningBarge(MiningBarge const &instance): _index(instance._index)
{
    this->_copyLasers(instance);
}

MiningBarge::~MiningBarge(void)
{
    std::cout << "Barge destroyed" << std::endl;
}

MiningBarge &	MiningBarge::operator=(MiningBarge const &rhs)
{
    this->_index = rhs._index;
    this->_copyLasers(rhs);
    return *this;
}

void	MiningBarge::equip(IMiningLaser* laser)
{
    if (this->_index > 3)
    {
        std::cout << "Barge inventory is full" << std::endl;
        return ;
    }
    this->_lasers[this->_index] = laser;
    this->_index++;
}

void	MiningBarge::mine(IAsteroid* a) const
{
	size_t  i = 0;
    while (i < 4)
    {
        std::cout << "Laser " << i;
        if (this->_lasers[i])
        {
            std::cout << ", your turn!" << std::endl;
            this->_lasers[i]->mine(a);
        }
        else
            std::cout << " not equipped." << std::endl;
        i++;
    }
}

void	MiningBarge::_copyLasers(MiningBarge const &instance)
{
	size_t  i = 0;
    while (i < 4)
    {
        if (instance._lasers[i])
            this->_lasers[i] = instance._lasers[i];
        else
            this->_lasers[i] = 0;
            i++;
    }
}