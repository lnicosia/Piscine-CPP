/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AddToken.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 11:55:54 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/24 16:39:26 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ADDTOKEN_HPP
# define ADDTOKEN_HPP

#include "OpToken.hpp"

class AddToken: public OpToken
{
	public:
		AddToken(void);
		//AddToken(** replace parameters **);
		AddToken(AddToken const &instance);
		AddToken &operator=(AddToken const &rhs);
		virtual ~AddToken(void);
        virtual int     op(int const &, int const &) const;

	private:

};

#endif