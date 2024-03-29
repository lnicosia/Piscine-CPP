/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MulToken.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 11:57:35 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/24 16:39:26 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MULTOKEN_HPP
# define MULTOKEN_HPP

#include "OpToken.hpp"

class MulToken: public OpToken
{
	public:
		MulToken(void);
		//MulToken(** replace parameters **);
		MulToken(MulToken const &instance);
		MulToken &operator=(MulToken const &rhs);
		virtual ~MulToken(void);
        virtual int     op(int const &, int const &) const;

	private:

};

#endif