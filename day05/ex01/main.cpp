/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 19:22:45 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/17 11:15:41 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int     main()
{
    try
    {
        Form form1("paperasse", 166, 20);
        std::cout << form1 << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        Form form1("paperasse2", 20, 1501);
        std::cout << form1 << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        Form form2("IMPORTANT DE OUF", 0, 40);
        std::cout << form2 << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        Form form2("IMPORTANT DE OUF", 40, 0);
        std::cout << form2 << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        Form form3("a remplir", 100, 50);
        Bureaucrat bur1("Swaggboy", 143);
        std::cout << form3 << std::endl;
        std::cout << bur1 << std::endl;
        bur1.signForm(&form3);
        std::cout << form3 <<std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        Form form3("a remplir d'urgence", 23, 50);
        Bureaucrat bur1("1er ministre", 4);
        std::cout << form3 << std::endl;
        std::cout << bur1 << std::endl;
        bur1.signForm(&form3);
        std::cout << form3 <<std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}