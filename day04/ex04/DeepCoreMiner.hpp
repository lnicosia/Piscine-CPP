/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DeepCoreMiner.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 17:29:44 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/16 18:17:27 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEEPCOREMINER_HPP
# define DEEPCOREMINER_HPP

#include "IMiningLaser.hpp"
#include "IAsteroid.hpp"

class IAsteroid;

class DeepCoreMiner : public IMiningLaser
{
	public:
		DeepCoreMiner(void);
		//DeepCoreMiner(** replace parameters **);
		DeepCoreMiner(DeepCoreMiner const &instance);
		DeepCoreMiner &operator=(DeepCoreMiner const &rhs);
		virtual ~DeepCoreMiner(void);
        virtual void mine(IAsteroid*);

	private:

};

#endif