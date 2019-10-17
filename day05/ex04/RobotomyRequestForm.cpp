/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 11:46:27 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/17 12:05:49 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void):
    Form("Robotomy request form", "default", 72, 45)
{
	
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): 
    Form("Robotomy request form", target, 72, 45)
{
	
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &instance)
{
	*this = instance;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	
}

RobotomyRequestForm &	RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	(void)rhs;
    return *this;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    this->executeCheck(executor);
    srand(time(NULL));
    int i = rand() % 2;
    std::cout << "******wefrKPOEDINRING******Pvdkpohkt*********" << std::endl;
    if (i == 0)
	    std::cout << this->getTarget() << " has been robotomized." << std::endl;
    else
        std::cout << "****failure****" << std::endl;
}