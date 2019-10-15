/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 15:30:17 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/15 16:29:26 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

#include <iostream>

class Enemy
{
	public:
		Enemy(void);
		Enemy(int hp, std::string const & type);
		Enemy(Enemy const &instance);
		Enemy &operator=(Enemy const &rhs);
		virtual ~Enemy(void);

        std::string     getType(void) const;
        int             getHP(void) const;
        void            setType(std::string type);
        void            setHP(int hp);
        
        virtual void    takeDamage(int damage);
    private:
    
	protected:
        int             _hp;
        std::string     _type;
};

#endif