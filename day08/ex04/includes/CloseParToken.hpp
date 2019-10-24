/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CloseParToken.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 14:15:11 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/24 16:39:26 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLOSEPARTOKEN_HPP
# define CLOSEPARTOKEN_HPP

#include "OpToken.hpp"

class CloseParToken: public OpToken
{
	public:
		CloseParToken(void);
		//CloseParToken(** replace parameters **);
		CloseParToken(CloseParToken const &instance);
		CloseParToken &operator=(CloseParToken const &rhs);
		virtual ~CloseParToken(void);
        virtual void    print(void) const;
        virtual int     op(int const &, int const &) const;

	private:

};

#endif