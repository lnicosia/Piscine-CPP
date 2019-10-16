/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StripMiner.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 17:29:56 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/16 18:43:10 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRIPMINER_HPP
# define STRIPMINER_HPP

#include "IMiningLaser.hpp"
#include "IAsteroid.hpp"

class IAsteroid;

class StripMiner : public IMiningLaser
{
	public:
		StripMiner(void);
		StripMiner(StripMiner const &instance);
		StripMiner &operator=(StripMiner const &rhs);
		virtual ~StripMiner(void);
        virtual void mine(IAsteroid*);

	private:

};

#endif