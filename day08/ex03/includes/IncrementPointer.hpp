/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IncrementPointer.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 11:22:53 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/23 21:21:39 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INCREMENTPOINTER_HPP
# define INCREMENTPOINTER_HPP

#include "IInstruction.hpp"

class IncrementPointer : public IInstruction
{
	public:
		IncrementPointer(void);
		//IncrementPointer(** replace parameters **);
		IncrementPointer(IncrementPointer const &instance);
		IncrementPointer &operator=(IncrementPointer const &rhs);
		virtual ~IncrementPointer(void);
		virtual void    execute(char *, size_t &);

	private:

};

#endif