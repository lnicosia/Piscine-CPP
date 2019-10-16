/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AsteroBocal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 17:35:55 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/16 18:00:24 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASTEROBOCAL_HPP
# define ASTEROBOCAL_HPP

#include "IAsteroid.hpp"

class AsteroBocal : public IAsteroid
{
	public:
		AsteroBocal(void);
		//AsteroBocal();
		AsteroBocal(AsteroBocal const &instance);
		AsteroBocal &operator=(AsteroBocal const &rhs);
		virtual ~AsteroBocal(void);
        virtual std::string beMined(DeepCoreMiner*) const;
        virtual std::string beMined(StripMiner*) const;
        //[...]
        virtual std::string getName() const;

	private:

};

#endif