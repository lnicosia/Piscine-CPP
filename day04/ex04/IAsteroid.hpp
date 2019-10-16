/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IAsteroid.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 17:30:46 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/16 18:09:25 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IASTEROID_HPP
# define IASTEROID_HPP

#include "DeepCoreMiner.hpp"
#include "StripMiner.hpp"
#include <iostream>

class DeepCoreMiner;
class StripMiner;

class IAsteroid
{
    public:
        virtual ~IAsteroid() {}
        virtual std::string beMined(DeepCoreMiner*) const = 0;
        virtual std::string beMined(StripMiner*) const = 0;
        //[...]
        virtual std::string getName() const = 0;
};

#endif