/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 13:49:45 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/17 15:39:36 by lnicosia         ###   ########.fr       */
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

        class UnknownFormException : public std::exception
        {
            public:
                UnknownFormException();
                UnknownFormException(UnknownFormException const &instance);
                UnknownFormException &operator=(UnknownFormException const &rhs);
                virtual ~UnknownFormException() throw();
                virtual const char* what() const throw();
        };
        
	private:
        static std::string  _forms[3];
        static Form* (Intern::*_newForm[3])(std::string target);

};

#endif