/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 15:49:57 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/15 16:17:28 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

#include <iostream>
#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	public:
		PowerFist(void);
		PowerFist(PowerFist const &instance);
		PowerFist &operator=(PowerFist const &rhs);
		~PowerFist(void);

		virtual void            attack() const;
	private:

};

std::ostream&   operator<<(std::ostream &o, PowerFist const &instance);

#endif