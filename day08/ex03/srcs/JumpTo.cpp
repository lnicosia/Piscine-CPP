/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   JumpTo.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 14:35:16 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/23 21:48:49 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "JumpTo.hpp"
#include <iterator>

JumpTo::JumpTo()
{
    
}

JumpTo::JumpTo(std::queue<IInstruction*> & queue, std::stringstream & s): _mo(), _queue(queue)
{
    (void)s;
    //_mo.fillQueue(queue, s);
}

JumpTo::JumpTo(JumpTo const & instance)
{
    *this = instance;
}

JumpTo::~JumpTo()
{
    
}

JumpTo & JumpTo::operator=(JumpTo const &rhs)
{
    (void)rhs;
    return *this;
}

void    JumpTo::execute(char *bytes, size_t & bytesIndex)
{
    if (!bytes[bytesIndex])
        return ;
    while (!_queue.empty())
    {
        //std::cout << "executing " << std::endl;
        _queue.front()->execute(bytes, bytesIndex);
        //std::cout << "index = " << _bytesIndex << std::endl;
        _queue.pop();
    }
}