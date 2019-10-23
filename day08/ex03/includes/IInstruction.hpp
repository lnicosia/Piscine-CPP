/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IInstruction.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 11:20:03 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/23 21:21:39 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IINSTRUCTION_HPP
# define IINSTRUCTION_HPP

#include <iostream>

#define SIZE 10000

class IInstruction
{
	public:
		virtual ~IInstruction(void) {}
		virtual void    execute(char *, size_t &) = 0;

	private:

};

#endif