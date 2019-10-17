/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 19:22:45 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/17 21:40:55 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CentralBureaucracy.hpp"

int     main()
{
    /*Bureaucrat b0("Micheline la nouvelle", 145);
    Bureaucrat b1("Barbouk le zombie", 140);
    Bureaucrat b2("Jean Arthur le pistoné", 130);
    Bureaucrat b3("Bob le gros flemmard", 125);
    Bureaucrat b4("Laeticia", 120);
    Bureaucrat b5("Osef", 115);
    Bureaucrat b6("Marmouk", 110);
    Bureaucrat b7("Pizzaboiiiii", 100);
    Bureaucrat b8("Monster Munch", 80);
    Bureaucrat b9("Travis l'americain", 75);
    Bureaucrat b10("George l'intello", 72);
    Bureaucrat b11("Osef2", 68);
    Bureaucrat b12("Petit poucet", 64);
    Bureaucrat b13("Peut etre", 53);
    Bureaucrat b14("Yannick Noah", 45);
    Bureaucrat b15("Kev Adams", 37);
    Bureaucrat b16("Ministre des tunnels", 32);
    Bureaucrat b17("Lilian Thuram", 24);
    Bureaucrat b18("Micheline l'ancienne", 12);
    Bureaucrat b19("Manu le boss", 1);*/
    
    Intern idiotOne;
    Bureaucrat a1 = Bureaucrat("Hermes Conrado", 1);
    Bureaucrat a2 = Bureaucrat("Bobby Bobsoin", 2);
    Bureaucrat a3 = Bureaucrat("Hermeses Conrad", 5);
    Bureaucrat a4 = Bureaucrat("Bobbyss Bobson", 57);
    Bureaucrat a5 = Bureaucrat("Hermesccc Conrad", 25);
    Bureaucrat a6 = Bureaucrat("Bobbyxx Bobson", 68);
    Bureaucrat a7 = Bureaucrat("Hermes de Conrad", 100);
    Bureaucrat a8 = Bureaucrat("Kamini", 100);
    Bureaucrat a9 = Bureaucrat("Obama", 75);
    Bureaucrat a10 = Bureaucrat("squeezie", 150);
    Bureaucrat a11 = Bureaucrat("franklin", 78);
    Bureaucrat a12 = Bureaucrat("lolo", 22);
    Bureaucrat a13 = Bureaucrat("paulo", 35);
    Bureaucrat a14 = Bureaucrat("greg", 12);
    Bureaucrat a15 = Bureaucrat("terminator", 7);
    Bureaucrat a16 = Bureaucrat("Tyrone", 68);
    Bureaucrat a17 = Bureaucrat("Yoplaa", 3);
    Bureaucrat a18 = Bureaucrat("Footix", 8);
    Bureaucrat a19 = Bureaucrat("Yakoa", 78);
    Bureaucrat a20= Bureaucrat("Benzema", 36);
    Bureaucrat a21= Bureaucrat("olalala y'en a pas 20 c'est pas le sujet de la correction !!", 36);
    CentralBureaucracy cb;
    cb.feed(&a1);
    cb.feed(&a2);
    cb.feed(&a3);
    cb.feed(&a4);
    cb.feed(&a5);
    cb.feed(&a6);
    cb.feed(&a7);
    cb.feed(&a8);
    cb.feed(&a9);
    cb.feed(&a10);
    cb.feed(&a11);
    cb.feed(&a12);
    cb.feed(&a13);
    cb.feed(&a14);
    cb.feed(&a15);
    cb.feed(&a16);
    cb.feed(&a17);
    cb.feed(&a18);
    cb.feed(&a19);
    cb.feed(&a20);
    cb.feed(&a21);
    int i;
    i = 0;
    while (i < 750)
    {
        cb.queueUp("mr padbol");
        i++;
    }
    cb.doBureaucracy();
    return 0;
}