/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 17:26:25 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/15 21:09:05 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

#include "ISquad.hpp"

class Squad : public ISquad
{
	public:
    	Squad(void);
		Squad(Squad const &instance);
		Squad &operator=(Squad const &rhs);
		virtual ~Squad(void);
        virtual int getCount() const;
        virtual ISpaceMarine* getUnit(int) const;
        virtual int push(ISpaceMarine*);

	private:
        int             _count;
        ISpaceMarine**  _marines;
        void            _deleteMarines();
        void            _copySquad(Squad const &instance);

};

#endif