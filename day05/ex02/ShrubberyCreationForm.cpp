/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 11:46:27 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/17 12:05:49 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void):
    Form("Shrubbery creation form", "default", 145, 137)
{
	
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): 
    Form("Shrubbery creation form", target, 145, 137)
{
	
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &instance)
{
	*this = instance;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	
}

ShrubberyCreationForm &	ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	(void)rhs;
    return *this;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    this->executeCheck(executor);
    std::string     fileName = this->getTarget() + "_shrubbery";
    std::ofstream   file;
    file.open(fileName);
    file << "ASCII TREE";
    file.close();
}