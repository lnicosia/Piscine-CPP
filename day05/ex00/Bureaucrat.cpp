/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 19:21:11 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/17 10:10:50 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
	
}

Bureaucrat::Bureaucrat(Bureaucrat const &instance)
{
	*this = instance;
}

Bureaucrat::~Bureaucrat(void)
{
	
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name)
{
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
    else
        this->_grade = grade;
}

Bureaucrat &	Bureaucrat::operator=(Bureaucrat const &rhs)
{
    this->_grade = rhs._grade;
	return *this;
}

int	Bureaucrat::getGrade() const
{
	return (this->_grade);
}

std::string	const Bureaucrat::getName() const
{
	return (this->_name);
}
void	Bureaucrat::setGrade(int grade)
{
	this->_grade = grade;
}

void    Bureaucrat::incrGrade()
{
    if (this->_grade <= 1)
    {
        throw GradeTooHighException();
        return ;
    }
    this->_grade--;
}

void    Bureaucrat::decrGrade()
{

    if (this->_grade >= 150)
    {
        throw GradeTooLowException();
        return ;
    }
    this->_grade++;
}

std::ostream&	operator<<(std::ostream &o, Bureaucrat const &instance)
{
    std::cout << "<" << instance.getName() << ">, bureaucrat grade <" << instance.getGrade() << ">." << std::endl;
    return o;
}

Bureaucrat::GradeTooHighException::GradeTooHighException()
{

}

Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException const &instance)
{
    *this = instance;
}

Bureaucrat::GradeTooHighException & Bureaucrat::GradeTooHighException::operator=(GradeTooHighException const &rhs)
{
    (void)rhs;
    return *this;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw()
{
    
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade is too high";
}
Bureaucrat::GradeTooLowException::GradeTooLowException()
{

}

Bureaucrat::GradeTooLowException::GradeTooLowException(GradeTooLowException const &instance)
{
    *this = instance;
}

Bureaucrat::GradeTooLowException & Bureaucrat::GradeTooLowException::operator=(GradeTooLowException const &rhs)
{
    (void)rhs;
    return *this;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw()
{
    
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade is too low";
}