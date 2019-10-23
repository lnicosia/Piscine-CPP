/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ByteIn.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 11:45:57 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/23 21:21:39 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BYTEIN_HPP
# define BYTEIN_HPP

#include "IInstruction.hpp"

class ByteIn: public IInstruction
{
	public:
		ByteIn(void);
		ByteIn(ByteIn const &instance);
		ByteIn &operator=(ByteIn const &rhs);
		virtual ~ByteIn(void);
		virtual void    execute(char *, size_t &);

	private:

};

#endif