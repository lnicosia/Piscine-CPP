/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   JumpTo.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 11:41:09 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/23 21:44:32 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef JUMPTO_HPP
# define JUMPTO_HPP

#include "IInstruction.hpp"
#include "Mindopen.hpp"

class JumpTo: public IInstruction
{
	public:
		JumpTo(void);
		JumpTo(std::queue<IInstruction*> &, std::stringstream &);
		JumpTo(JumpTo const &instance);
		JumpTo &operator=(JumpTo const &rhs);
		virtual ~JumpTo(void);
		virtual void    execute(char *, size_t &);

	private:
		Mindopen	_mo;
		std::queue<IInstruction *>	_queue;

};

#endif