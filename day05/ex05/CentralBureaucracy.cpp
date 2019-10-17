/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CentralBureaucracy.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 18:39:43 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/17 21:45:07 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CentralBureaucracy.hpp"

CentralBureaucracy::CentralBureaucracy(void): _signIndex(0), _execIndex(0), _queueIndex(0)
{
	size_t  i = 0;
    while (i < 1000)
    {
        if (i < 200)
        {
            this->_offices[i].setIntern(new Intern());
            this->_offices[i].setExecuter(0);
            this->_offices[i].setExecuter(0);
        }
        i++;
    }
}

CentralBureaucracy::CentralBureaucracy(CentralBureaucracy const &instance)
{
	*this = instance;
}

CentralBureaucracy::~CentralBureaucracy(void)
{
	
}

CentralBureaucracy &	CentralBureaucracy::operator=(CentralBureaucracy const &rhs)
{
    (void)rhs;
    return *this;
}

void	CentralBureaucracy::doBureaucracy()
{
    Intern  intern;
    srand(time(NULL));
    int     r;
	size_t  i = 0;
    while (i < this->_queueIndex)
    {
        size_t  j = 0;
        while (j < 20 && i + j < this->_queueIndex)
        {
            this->_offices[j].setIntern(&intern);
            r = rand() % 3;
            std::cout << "Candidat numero " << i + j << std::endl;
            try
            {
                this->_offices[j].doBureaucracy(intern.getForm(r), this->_queue[i + j]);
            }
            catch(OfficeBlock::NullPointerException &e)
            {
                std::cerr << e.what() << std::endl;
            }
            catch(Intern::UnknownFormException &e)
            {
                std::cerr << e.what() << std::endl;
            }
            catch(Form::GradeTooLowException &e)
            {
                std::cerr << e.what() << std::endl;
            }
            catch (std::exception & e)
            {
                std::cerr << e.what() << std::endl;
            }
            j++;
        }
        i += j;
    }
}

void	CentralBureaucracy::feed(Bureaucrat * b)
{
	if (this->_signIndex >= 20 || this->_execIndex >= 20)
    {
        std::cout << "Every box is full" << std::endl;
        return ;
    }
    if (this->_signIndex == this->_execIndex)
    {
        this->_offices[this->_signIndex].setSigner(b);
        this->_signIndex++;
    }
    else
    {
        this->_offices[this->_execIndex].setExecuter(b);
        this->_execIndex++;
    }
}

void	CentralBureaucracy::queueUp(std::string target)
{
	if (this->_queueIndex >= 1000)
    {
        std::cout << "Target queue is full" << std::endl;
        return ;
    }
    this->_queue[this->_queueIndex] = target;
    this->_queueIndex++;
}