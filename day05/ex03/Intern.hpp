/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 13:49:45 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/17 14:46:40 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
	public:
		Intern(void);
		Intern(Intern const &instance);
		Intern &operator=(Intern const &rhs);
		~Intern(void);
        Form*       makeForm(std::string name, std::string target);
        Form*       makePardonForm(std::string target);
        Form*       makeRobotomyForm(std::string target);
        Form*       makeShrubberyForm(std::string target);

	private:
        static std::string  _forms[3];
        static Form* (Intern::*_newForm[3])(std::string target);

};

#endif