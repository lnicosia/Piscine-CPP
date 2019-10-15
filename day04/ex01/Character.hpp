/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 15:49:19 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/15 16:18:58 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
	public:
		Character(std::string const & name);
		Character(Character const &instance);
		Character &operator=(Character const &rhs);
		~Character(void);

        std::string getName(void) const;
        int         getAp(void) const;
        AWeapon*    getWeapon(void) const;
        void        setName(std::string const & name);
        void        setAp(int ap);
        void        equip(AWeapon *weapon);

        void        recoverAP(void);
        void        attack(Enemy *enemy);

	private:
		Character(void);
        std::string _name;
        int         _ap;
        AWeapon*    _weapon;

};

std::ostream&	operator<<(std::ostream &o, Character const &instance);

#endif