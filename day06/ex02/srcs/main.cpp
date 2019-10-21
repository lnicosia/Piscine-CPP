/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 18:59:02 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/21 19:25:00 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Base
{
    public:
        virtual ~Base() {};
};

class A: public Base
{

};

class B: public Base
{

};

class C: public Base
{

};

Base *  generate(void)
{
    Base *  res;
    srand(static_cast<unsigned int>(time(NULL)));
    int dice = rand() % 3;
    switch (dice)
    {
        case 0:
            res = new A();
            break;
        case 1:
            res = new B();
            break;
        case 2:
            res = new C();
            break;
    }
    return res;
}

void identify_from_pointer( Base * p )
{
    A*  a = dynamic_cast<A*>(p);
    B*  b = dynamic_cast<B*>(p);
    C*  c = dynamic_cast<C*>(p);
    if (a)
    {
        std::cout << "A" << std::endl;
    }
    else if (b)
    {
        std::cout << "B" << std::endl;
    }
    else if (c)
    {
        std::cout << "C" << std::endl;
    }
}

void identify_from_reference( Base & p )
{
    try
    {
        A&  a = dynamic_cast<A&>(p);
        (void)a;
        std::cout << "A" << std::endl;
    }
    catch (std::exception e)
    {
        
    }
    try
    {
        B&  b = dynamic_cast<B&>(p);
        (void)b;
        std::cout << "B" << std::endl;
    }
    catch (std::exception e)
    {
        
    }
    try
    {
        C&  c = dynamic_cast<C&>(p);
        (void)c;
        std::cout << "C" << std::endl;
    }
    catch (std::exception e)
    {
        
    }
}

int main()
{
    std::cout << std::endl << "/*** GENERATING ***/" << std::endl << std::endl;
    Base *base = generate();
    std::cout << std::endl << "/*** IDENTIFICATION FROM POINTER ***/" << std::endl << std::endl;
    identify_from_pointer(base);
    std::cout << std::endl << "/*** IDENTIFICATION FROM REFERENCE ***/" << std::endl << std::endl;
    identify_from_reference(*base);
    std::cout << std::endl;
    return 0;
}