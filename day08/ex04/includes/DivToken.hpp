/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DivToken.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 11:58:04 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/24 12:36:08 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIVTOKEN_HPP
# define DIVTOKEN_HPP

#include "OpToken.hpp"

class DivToken: public OpToken
{
	public:
		DivToken(void);
		//DivToken(** replace parameters **);
		DivToken(DivToken const &instance);
		DivToken &operator=(DivToken const &rhs);
		virtual ~DivToken(void);
        virtual void    op(NumToken const & rhs);
        
	private:

};

#endif