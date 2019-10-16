/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BocalSteroid.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 17:36:09 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/16 18:00:28 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BOCALSTEROID_HPP
# define BOCALSTEROID_HPP

#include "IAsteroid.hpp"

class BocalSteroid : public IAsteroid
{
	public:
		BocalSteroid(void);
		//BocalSteroid();
		BocalSteroid(BocalSteroid const &instance);
		BocalSteroid &operator=(BocalSteroid const &rhs);
		virtual ~BocalSteroid(void);
        virtual std::string beMined(DeepCoreMiner*) const;
        virtual std::string beMined(StripMiner*) const;
        //[...]
        virtual std::string getName() const;

	private:

};

#endif