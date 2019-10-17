/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 10:26:21 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/17 11:26:06 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): _name("Feuille d'impots"), _signed(false), _minSignGrade(50), _minExecGrade(100)
{

}

Form::Form(std::string name, int minSignGrade, int minExecGrade):
    _name(name), _signed(false), _minSignGrade(minSignGrade), _minExecGrade(minExecGrade)
{
    if (minSignGrade < 1)
        throw GradeTooLowException("Required grade to sign is too low.");
    if (minSignGrade > 150)
        throw GradeTooHighException("Required grade to sign is too high.");
    if (minExecGrade < 1)
        throw GradeTooLowException("Required grade to execute is too low.");
    if (minExecGrade > 150)
        throw GradeTooHighException("Required grade to execute is too high.");
}

Form::Form(Form const &instance):
    _name(instance._name), _signed(instance._signed),
    _minSignGrade(instance._minSignGrade), _minExecGrade(instance._minExecGrade)
{
    
}

Form    & Form::operator=(Form const &rhs)
{
    this->_signed = rhs._signed;
    return *this;
}

Form::~Form()
{
    
}

std::ostream&	operator<<(std::ostream &o, Form const &instance)
{
	std::cout << "The form \"" << instance.getName() << "\" requires a grade of ";
    std::cout << instance.getMinExecGrade() << " to be executed and a grade of ";
    std::cout << instance.getMinSignGrade() << " to be signed." << std::endl;
    if (instance.getSigned())
        std::cout << "It is currently signed.";
    else
        std::cout << "It is currently not signed.";
    std::cout << std::endl;
    return o;
}

std::string const   Form::getName() const
{
    return this->_name;
}

int                 Form::getMinSignGrade() const
{
    return this->_minSignGrade;
}

int                 Form::getMinExecGrade() const
{
    return this->_minExecGrade;
}

bool                Form::getSigned() const
{
    return this->_signed;
}

void                Form::beSigned(Bureaucrat& b)
{
    if (b.getGrade() > this->_minSignGrade)
        throw GradeTooLowException("Bureaucrate grade is too low to sign.");
    std::cout << b.getName() << " signed \"" << this->_name << "\"" << std::endl;
    this->_signed = true;
}

/********** Exceptions part **********/

Form::GradeTooLowException::GradeTooLowException(): _error("Grade is too low")
{
	
}

Form::GradeTooLowException::GradeTooLowException(std::string const error): _error(error)
{
	
}

Form::GradeTooLowException::GradeTooLowException(GradeTooLowException const &instance)
{
	*this = instance;
}

Form::GradeTooLowException::~GradeTooLowException() throw()
{
	
}

Form::GradeTooLowException &	Form::GradeTooLowException::operator=(GradeTooLowException const &rhs)
{
	(void)rhs;
    return *this;
}

const char* Form::GradeTooLowException::what() const throw()
{
    return this->_error.c_str();
}

Form::GradeTooHighException::GradeTooHighException(): _error("Grade is too high")
{
	
}

Form::GradeTooHighException::GradeTooHighException(std::string const error): _error(error)
{
	
}

Form::GradeTooHighException::GradeTooHighException(GradeTooHighException const &instance)
{
	*this = instance;
}

Form::GradeTooHighException::~GradeTooHighException() throw()
{
	
}

Form::GradeTooHighException &	Form::GradeTooHighException::operator=(GradeTooHighException const &rhs)
{
	(void)rhs;
    return *this;
}

const char* Form::GradeTooHighException::what() const throw()
{
    return this->_error.c_str();
}