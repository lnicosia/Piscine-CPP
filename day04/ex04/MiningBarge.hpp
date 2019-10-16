/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MiningBarge.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 17:30:34 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/16 18:56:14 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MININGBARGE_HPP
# define MININGBARGE_HPP

#include "IMiningLaser.hpp"
#include <iostream>

class IMiningLaser;

class MiningBarge
{
	public:
		MiningBarge(void);
		//MiningBarge();
		MiningBarge(MiningBarge const &instance);
		MiningBarge &operator=(MiningBarge const &rhs);
		~MiningBarge(void);
        void equip(IMiningLaser*);
        void mine(IAsteroid*) const;

	private:
        IMiningLaser*   _lasers[4];
        size_t          _index;
        void            _copyLasers(MiningBarge const &instance);
  

};

#endif