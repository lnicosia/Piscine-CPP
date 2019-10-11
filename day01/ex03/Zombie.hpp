/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 17:20:58 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/11 17:42:33 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>

class	Zombie
{
	private:
		std::string	_type;
		std::string	_name;
	public:
		Zombie(void);
		Zombie(std::string type, std::string name);
		~Zombie(void);
		void	announce(void);
		void	setType(std::string type);
};

#endif
