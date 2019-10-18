/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 19:22:45 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/17 19:39:07 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OfficeBlock.hpp"

int     main()
{
    Intern idiotOne;
    Bureaucrat hermes = Bureaucrat("Hermes Conrad", 37);
    Bureaucrat bob = Bureaucrat("Bobby Bobson", 40);
    OfficeBlock ob;
    ob.setIntern(&idiotOne);
    ob.setSigner(&bob);
    ob.setExecuter(&hermes);
    try
    {
        //ob.doBureaucracy("tree reugiugquest", "Pigley");
        ob.doBureaucracy("tree request", "Pigley");
    }
    catch(OfficeBlock::NullPointerException &e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(Intern::UnknownFormException &e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(Form::GradeTooLowException &e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}