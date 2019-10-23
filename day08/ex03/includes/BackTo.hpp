/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BackTo.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 11:42:00 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/23 21:21:39 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BACKTO_HPP
# define BACKTO_HPP

#include "IInstruction.hpp"

class BackTo: public IInstruction
{
	public:
		BackTo(void);
		BackTo(BackTo const &instance);
		BackTo &operator=(BackTo const &rhs);
		virtual ~BackTo(void);
		virtual void    execute(char *, size_t &);

	private:

};

#endif