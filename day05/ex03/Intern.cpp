/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 13:51:47 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/17 14:55:33 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
}

Intern::Intern(Intern const &instance)
{
	*this = instance;
}

Intern::~Intern(void)
{
	
}

Intern &	Intern::operator=(Intern const &rhs)
{
	(void)rhs;
    return *this;
}

Form*	Intern::makeForm(std::string name, std::string target)
{
	size_t  i = 0;
    while (i < 3)
    {
        if (!name.compare(this->_forms[i]))
        {
            std::cout << "Intern creates " << this->_forms[i] << std::endl;
            return (this->*Intern::_newForm[i])(target);
        }
        i++;
    }
    std::cout << "This random intern does not know how to make " << name << " forms --'" << std::endl;
    return 0;
}

Form*	Intern::makePardonForm(std::string target)
{
	return new PresidentialPardonForm(target);
}

Form*	Intern::makeRobotomyForm(std::string target)
{
	return new RobotomyRequestForm(target);
}

Form*	Intern::makeShrubberyForm(std::string target)
{
	return new ShrubberyCreationForm(target);
}

Form* (Intern::*Intern::_newForm[3])(std::string target) =
{
    &Intern::makePardonForm,
    &Intern::makeRobotomyForm,
    &Intern::makeShrubberyForm,
};

std::string Intern::_forms[3] = {
	"robotomy request",
    "tree request",
    "pardon request",
};