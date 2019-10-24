/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AToken.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 11:49:26 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/24 14:40:39 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATOKEN_HPP
# define ATOKEN_HPP

#include <string>

class AToken
{
	public:
		AToken(void);
		AToken(std::string, size_t type);
		AToken(AToken const &instance);
		AToken &operator=(AToken const &rhs);
		virtual ~AToken(void);
        virtual void    print(void) const = 0;
        std::string     getContent(void) const;
        size_t          getType(void) const;

	private:
        std::string     _content;
        size_t          _type;

};

#endif