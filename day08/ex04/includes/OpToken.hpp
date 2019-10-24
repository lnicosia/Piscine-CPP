/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OpToken.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 11:53:02 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/24 12:27:21 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPTOKEN_HPP
# define OPTOKEN_HPP

#include "NumToken.hpp"

class OpToken: public AToken
{
	public:
		OpToken(void);
		OpToken(char c);
		OpToken(OpToken const &instance);
		OpToken &operator=(OpToken const &rhs);
		virtual ~OpToken(void);
        virtual void    op(NumToken const & rhs) = 0;
        virtual void    print(void) const;

	private:

};

#endif