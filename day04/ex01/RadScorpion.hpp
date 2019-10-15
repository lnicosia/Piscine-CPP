/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 15:49:28 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/15 18:01:04 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

#include <iostream>
#include "Enemy.hpp"

class RadScorpion : public Enemy
{
	public:
		RadScorpion(void);
		RadScorpion(RadScorpion const &instance);
		RadScorpion &operator=(RadScorpion const &rhs);
		virtual	~RadScorpion(void);

	private:

};

#endif