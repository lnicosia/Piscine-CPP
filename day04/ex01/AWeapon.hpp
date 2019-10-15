/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 15:50:02 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/15 16:29:16 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <iostream>

class AWeapon
{
	public:
		AWeapon(std::string const & name, int apcost, int damage);
		AWeapon(AWeapon const &instance);
		AWeapon &operator=(AWeapon const &rhs);
		virtual ~AWeapon(void);

        virtual std::string     getName(void) const;
        int                     getAPCost() const;
        int                     getDamage() const;
        virtual void            attack() const = 0;
	private:

    protected:
    	AWeapon(void);
        std::string             _name;
        int                     _apCost;
        int                     _damage;       
};

std::ostream&   operator<<(std::ostream &o, AWeapon const &instance);

#endif