/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 17:26:31 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/15 17:28:26 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
# define ISQUAD_HPP

#include "ISpaceMarine.hpp"

class ISquad
{
	public:
		virtual                 ~ISquad() {}
        virtual int             getCount() const = 0;
        virtual ISpaceMarine*   getUnit(int n) const = 0;
        virtual int             push(ISpaceMarine*) = 0;

	private:

};

#endif