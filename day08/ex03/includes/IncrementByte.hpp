/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IncrementByte.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 11:36:29 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/23 21:21:39 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INCREMENTBYTE_HPP
# define INCREMENTBYTE_HPP

#include "IInstruction.hpp"

class IncrementByte: public IInstruction
{
	public:
		IncrementByte(void);
		//IncrementByte(** replace parameters **);
		IncrementByte(IncrementByte const &instance);
		IncrementByte &operator=(IncrementByte const &rhs);
		virtual ~IncrementByte(void);
		virtual void    execute(char *, size_t &);

	private:

};

#endif