/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SubToken.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 11:56:42 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/24 12:33:58 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUBTOKEN_HPP
# define SUBTOKEN_HPP

#include "OpToken.hpp"

class SubToken: public OpToken
{
	public:
		SubToken(void);
		//SubToken(** replace parameters **);
		SubToken(SubToken const &instance);
		SubToken &operator=(SubToken const &rhs);
		virtual ~SubToken(void);
        virtual void    op(NumToken const & rhs);

	private:

};

#endif