/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 19:21:11 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/16 19:47:09 by lnicosia         ###   ########.fr       */
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
    try
    {
        if (grade < 1)
            throw GradeTooHighException();
        if (grade > 150)
            throw GradeTooLowException();
    }
    catch(GradeTooHighException & e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(GradeTooLowException & e)
    {
        std::cerr << e.what() << std::endl;
    }
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
    try
    {
        if (this->_grade <= 1)
            throw GradeTooHighException();
        this->_grade--;
    }
    catch(GradeTooHighException & e)
    {
        std::cerr << e.what() << std::endl;
    }
}

void    Bureaucrat::decrGrade()
{
    try
    {
        if (this->_grade >= 150)
            throw GradeTooLowException();
        this->_grade++;
    }
    catch(GradeTooLowException & e)
    {
        std::cerr << e.what() << std::endl;
    }
}

std::ostream&	operator<<(std::ostream &o, Bureaucrat const &instance)
{
    std::cout << "<" << instance.getName() << ">, bureaucrat grade <" << instance.getName() << ">." << std::endl;
    return o;
}