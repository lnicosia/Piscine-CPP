/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DecrementByte.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 11:36:29 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/23 21:21:39 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DecrementByte_HPP
# define DecrementByte_HPP

#include "IInstruction.hpp"

class DecrementByte: public IInstruction
{
	public:
		DecrementByte(void);
		//DecrementByte(** replace parameters **);
		DecrementByte(DecrementByte const &instance);
		DecrementByte &operator=(DecrementByte const &rhs);
		virtual ~DecrementByte(void);
		virtual void    execute(char *, size_t &);
		
	private:

};

#endif