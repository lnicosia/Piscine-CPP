/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 19:22:45 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/17 14:56:07 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int     main()
{
    Intern  random;
    Form    *f = random.makeForm("robotomy request", "Bob");
    Form    *f2 = random.makeForm("boost request", "Martine");
    Bureaucrat  manu("Manu", 1);
    manu.signForm(f);
    manu.executeForm(*f);
    delete f;
    delete f2;
    return 0;
}