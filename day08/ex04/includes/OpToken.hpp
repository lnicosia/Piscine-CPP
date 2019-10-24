/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OpToken.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 11:53:02 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/24 16:39:26 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPTOKEN_HPP
# define OPTOKEN_HPP

#include "NumToken.hpp"

class OpToken: public AToken
{
	public:
		OpToken(void);
		OpToken(std::string, size_t, size_t);
		OpToken(OpToken const &e);
		OpToken &operator=(OpToken const &rhs);
		virtual ~OpToken(void);
        virtual int     op(int const &, int const &) const = 0;
        virtual void    print(void) const;
        size_t          getPrecedence(void) const;

	private:
        size_t  _precedence;

};

#endif