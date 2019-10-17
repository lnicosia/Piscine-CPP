/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 19:22:45 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/17 10:11:05 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int     main()
{
    try
    {
        Bureaucrat b("ludow", 10000);
        std::cout << b << std::endl;
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        Bureaucrat b("didier", 0);
        std::cout << b << std::endl;
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        Bureaucrat c("Mindow", 23);
        while(1)
        {
            c.incrGrade();
            std::cout << c << std::endl;
        }
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        Bureaucrat d("Swaggboy", 143);
        while(1)
        {
            d.decrGrade();
            std::cout << d << std::endl;
        }
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}