/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 17:26:27 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/15 20:16:09 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
	public:
    	TacticalMarine(void);
		TacticalMarine(TacticalMarine const &instance);
		TacticalMarine &operator=(TacticalMarine const &rhs);
		virtual                 ~TacticalMarine(void);
        virtual ISpaceMarine*   clone() const;
        virtual void            battleCry() const;
        virtual void            rangedAttack() const;
        virtual void            meleeAttack() const;

	private:

};

#endif