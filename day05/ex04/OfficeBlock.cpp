/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 15:11:51 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/17 16:11:47 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OfficeBlock.hpp"

OfficeBlock::OfficeBlock(void): _intern(0), _signer(0), _executer(0)
{
	
}

OfficeBlock::OfficeBlock(Intern* intern, Bureaucrat *signer, Bureaucrat *executer):
    _intern(intern), _signer(signer), _executer(executer)
{
	
}

OfficeBlock::OfficeBlock(OfficeBlock const & instance)
{
	*this = instance;
}

OfficeBlock &	OfficeBlock::operator=(OfficeBlock const & rhs)
{
    this->_intern = rhs._intern;
	this->_executer = rhs._executer;
    this->_signer = rhs._signer;
    return *this;
}

OfficeBlock::~OfficeBlock(void)
{
	
}

void	OfficeBlock::setIntern(Intern* intern)
{
	this->_intern = intern;
}

void	OfficeBlock::setSigner(Bureaucrat* signer)
{
	this->_signer = signer;
}

void	OfficeBlock::setExecuter(Bureaucrat* executer)
{
	this->_executer = executer;
}

void	OfficeBlock::doBureaucracy(std::string name, std::string target )
{
    try
    {
        if (!this->_intern || !this->_executer || !this->_signer)
            throw NullPointerException();
        Form *f = this->_intern->makeForm(name, target);
        this->_signer->signForm(f);
        this->_executer->executeForm(*f);
    }
    catch(NullPointerException &e)
    {
        throw e;
    }
    catch(Intern::UnknownFormException &e)
    {
        throw e;
    }
    catch(Form::GradeTooLowException &e)
    {
        throw e;
    }
    catch(const std::exception &e)
    {
        throw e;
    }
    
}

/********* Exceptions part **********/

OfficeBlock::NullPointerException::NullPointerException()
{

}

OfficeBlock::NullPointerException::NullPointerException(NullPointerException const &instance)
{
    *this = instance;
}

OfficeBlock::NullPointerException & OfficeBlock::NullPointerException::operator=(NullPointerException const &rhs)
{
    (void)rhs;
    return *this;
}

OfficeBlock::NullPointerException::~NullPointerException() throw()
{
    
}

const char* OfficeBlock::NullPointerException::what() const throw()
{
    return "Error: NullPointerException";
}