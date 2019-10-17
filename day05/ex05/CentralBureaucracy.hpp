/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CentralBureaucracy.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 17:09:29 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/17 18:40:13 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CENTRALBUREAUCRACY_HPP
# define CENTRALBUREAUCRACY_HPP

#include "OfficeBlock.hpp"

class CentralBureaucracy
{
	public:
		CentralBureaucracy(void);
		CentralBureaucracy(CentralBureaucracy const &instance);
		CentralBureaucracy &operator=(CentralBureaucracy const &rhs);
		~CentralBureaucracy(void);
        void        doBureaucracy();
        void        feed(Bureaucrat *);
        void        queueUp(std::string);

	private:
        OfficeBlock     _offices[20];
        std::string     _queue[1000];
        size_t          _signIndex;
        size_t          _execIndex;
        size_t          _queueIndex;

};

#endif