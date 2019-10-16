/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 17:31:46 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/16 18:57:42 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IAsteroid.hpp"
#include "IMiningLaser.hpp"
#include "AsteroBocal.hpp"
#include "BocalSteroid.hpp"
#include "StripMiner.hpp"
#include "DeepCoreMiner.hpp"
#include "MiningBarge.hpp"

void    func()
{
    MiningBarge     bargeSwagg;
    AsteroBocal     aBocal;
    BocalSteroid    bSteroid;
    DeepCoreMiner   dcm;
    StripMiner      sm;

    bargeSwagg.equip(&dcm);
    bargeSwagg.equip(&sm);

    bargeSwagg.mine(&bSteroid);
    
    bargeSwagg.equip(&sm);
    bargeSwagg.equip(&dcm);
    bargeSwagg.equip(&dcm);

    bargeSwagg.mine(&aBocal);
}

int     main()
{
    func();
    while (1);
    return 0;
}