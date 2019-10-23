/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DecrementPointer.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 11:22:53 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/23 21:21:39 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DecrementPOINTER_HPP
# define DecrementPOINTER_HPP

#include "IInstruction.hpp"

class DecrementPointer : public IInstruction
{
	public:
		DecrementPointer(void);
		//DecrementPointer(** replace parameters **);
		DecrementPointer(DecrementPointer const &instance);
		DecrementPointer &operator=(DecrementPointer const &rhs);
		virtual ~DecrementPointer(void);
		virtual void    execute(char *, size_t &);

	private:

};

#endif