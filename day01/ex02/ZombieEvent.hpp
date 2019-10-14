/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 17:27:19 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/14 12:20:39 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_HPP
# define ZOMBIE_EVENT_HPP
# include "Zombie.hpp"

class	ZombieEvent
{
	private:
		std::string	_type;
	public:
		ZombieEvent(void);
		~ZombieEvent(void);
		void	setZombieType(std::string type);
		Zombie*	newZombie(std::string name);
		Zombie*	randomChump(void);
};

#endif
