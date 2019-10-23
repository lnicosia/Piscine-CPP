/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ByteOut.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 11:40:06 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/23 21:21:39 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ByteOut_HPP
# define ByteOut_HPP

#include "IInstruction.hpp"

class ByteOut: public IInstruction
{
	public:
		ByteOut(void);
		//ByteOut(** replace parameters **);
		ByteOut(ByteOut const &instance);
		ByteOut &operator=(ByteOut const &rhs);
		virtual ~ByteOut(void);
		virtual void    execute(char *, size_t &);

	private:

};

#endif