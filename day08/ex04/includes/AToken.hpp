/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AToken.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 11:49:26 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/24 12:24:26 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATOKEN_HPP
# define ATOKEN_HPP

class AToken
{
	public:
		AToken(void);
		AToken(char c);
		AToken(AToken const &instance);
		AToken &operator=(AToken const &rhs);
		virtual ~AToken(void);
        virtual void    print(void) const = 0;
        char            getChar(void) const;

	private:
        char    _c;

};

#endif