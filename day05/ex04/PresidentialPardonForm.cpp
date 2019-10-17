/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 11:46:27 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/17 12:32:51 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void):
    Form("Presidential pardon form", "default", 25, 5)
{
	
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): 
    Form("Presidential pardon form", target, 25, 5)
{
	
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &instance)
{
	*this = instance;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	
}

PresidentialPardonForm &	PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
	(void)rhs;
    return *this;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    this->executeCheck(executor);
	std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}