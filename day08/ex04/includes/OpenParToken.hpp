/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OpenParToken.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 14:13:11 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/24 16:39:26 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPENPARTOKEN_HPP
# define OPENPARTOKEN_HPP

#include "OpToken.hpp"

class OpenParToken: public OpToken
{
	public:
		OpenParToken(void);
		//OpenParToken(** replace parameters **);
		OpenParToken(OpenParToken const &instance);
		OpenParToken &operator=(OpenParToken const &rhs);
		virtual ~OpenParToken(void);
        virtual void    print(void) const;
        virtual int     op(int const &, int const &) const;

	private:

};

#endif