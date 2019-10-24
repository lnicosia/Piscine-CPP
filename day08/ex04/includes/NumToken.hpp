/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NumToken.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 11:52:19 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/24 14:02:52 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NUMTOKEN_HPP
# define NUMTOKEN_HPP

#include "AToken.hpp"

class NumToken: public AToken
{
	public:
		NumToken(void);
		NumToken(std::string s, int value);
		NumToken(NumToken const &instance);
		NumToken &operator=(NumToken const &rhs);
		virtual ~NumToken(void);
        virtual void    print(void) const;
        int             getValue(void) const;

	private:
        int _value;

};

#endif