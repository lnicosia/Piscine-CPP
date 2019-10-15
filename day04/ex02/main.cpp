/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 17:26:07 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/15 21:17:21 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"
#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include <iostream>

void    func()
{
    ISpaceMarine* bob = new TacticalMarine;
    ISpaceMarine* jim = new AssaultTerminator;
    ISpaceMarine* will = new TacticalMarine;
    ISpaceMarine* john = new TacticalMarine;
    ISquad* vlc = new Squad;
    vlc->push(bob);
    vlc->push(jim);
    vlc->push(jim);
    vlc->push(will);
    vlc->push(nullptr);
    ISquad* squad2 = new Squad;
    std::cout << "squad2 address = " << squad2 << std::endl;
    *squad2 = *vlc;
    squad2->push(john);
    *squad2 = *vlc;
    //ISquad* squad3;
    std::cout << "Squad 1, let's fight!" << std::endl;
    for (int i = 0; i < vlc->getCount(); ++i)
    {
        ISpaceMarine* cur = vlc->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }
    std::cout << "Squad 2, let's fight!" << std::endl;
    for (int i = 0; i < squad2->getCount(); ++i)
    {
        ISpaceMarine* cur = squad2->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }
    delete vlc;
    delete squad2;
}

int main()
{
    func();
    while (1);
    return 0;
}

/*void test()
{
    ISpaceMarine* bob = new TacticalMarine;
    ISpaceMarine* jim = new AssaultTerminator;
    ISquad* vlc = new Squad;
    vlc->push(bob);
    vlc->push(jim);
    for (int i = 0; i < vlc->getCount(); ++i)
    {
        ISpaceMarine* cur = vlc->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }
    std::cout << "squad size: " << vlc->getCount() << std::endl;
    int i;
    i = 0;
    while (i < 1000)
    {
        vlc->push(nullptr);
        i++;
    }
    i = 0;
    std::cout << "squad size: " << vlc->getCount() << std::endl;
    while (i < 10)
    {
        vlc->push(bob->clone());
        vlc->push(jim->clone());
        i++;
    }
    std::cout << "squad size: " << vlc->getCount() << std::endl;
    i = 0;
    while (i < vlc->getCount())
    {
        ISpaceMarine* cur = vlc->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
        i++;
    }
    Squad a = Squad();
    a.push(bob->clone());
    
    Squad b = Squad(a);
    b.push(jim->clone());
    
    i = 0;
    std::cout << "a:" << std::endl;
    while (i < a.getCount())
    {
        ISpaceMarine* cur = a.getUnit(i);
        cur->battleCry();
        i++;
    }
    i = 0;
    std::cout << "b:" <<std::endl;
    while (i < b.getCount())
    {
        ISpaceMarine* cur = b.getUnit(i);
        cur->battleCry();
        i++;
    }
    Squad c = Squad();
    c.push(bob->clone());
    c.push(bob->clone());
    c.push(bob->clone());
    c.push(bob->clone());
    c.push(bob->clone());
    
    std::cout << "c:" << std::endl;
    i = 0;
    while (i < c.getCount())
    {
        ISpaceMarine* cur = c.getUnit(i);
        cur->battleCry();
        i++;
    }
    Squad d;
    d.push(jim->clone());
    d.push(jim->clone());
    std::cout << "d:" << std::endl;
    i = 0;
    while (i < d.getCount())
    {
        ISpaceMarine* cur = d.getUnit(i);
        cur->battleCry();
        i++;
    }
    d = c;
    i = 0;
    std::cout << "c:" << std::endl;
    i = 0;
    while (i < c.getCount())
    {
        ISpaceMarine* cur = c.getUnit(i);
        cur->battleCry();
        i++;
    }
    i = 0;
    std::cout << "d:" <<std::endl;
    while (i < d.getCount())
    {
        ISpaceMarine* cur = d.getUnit(i);
        cur->battleCry();
        i++;
    }
    delete vlc;
}
int main()
{
    test();
    while(1);
    return 0;
}*/