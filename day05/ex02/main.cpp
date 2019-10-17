/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 19:22:45 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/17 13:47:18 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int     main()
{
    Bureaucrat  bob("Bob", 147);
    Bureaucrat  john("John", 60);
    Bureaucrat  manu("Manu", 1);
    Form        *f1 = new PresidentialPardonForm("mechant pabo");
    Form        *f2 = new RobotomyRequestForm("meurtier sanglant");
    Form        *f3 = new ShrubberyCreationForm("home");

    std::cout << *f1 << std::endl;
    std::cout << *f2 << std::endl;
    std::cout << *f3 << std::endl;
    bob.executeForm(*f1);
    bob.executeForm(*f2);
    bob.executeForm(*f3);
    manu.signForm(f1);
    manu.signForm(f2);
    manu.signForm(f3);
    std::cout << std::endl << *f1 << std::endl;
    std::cout << *f2 << std::endl;
    std::cout << *f3 << std::endl;
    
    john.executeForm(*f1);
    john.executeForm(*f2);
    john.executeForm(*f3);
    
    manu.executeForm(*f1);
    manu.executeForm(*f2);
    manu.executeForm(*f3);
    return 0;
}