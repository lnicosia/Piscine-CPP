/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mindopen.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 12:24:22 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/24 11:03:06 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Mindopen.hpp"
#include "IncrementPointer.hpp"
#include "IncrementByte.hpp"
#include "DecrementPointer.hpp"
#include "DecrementByte.hpp"
#include "JumpTo.hpp"
#include "BackTo.hpp"
#include "ByteIn.hpp"
#include "ByteOut.hpp"
#include <iostream>
#include <sstream>
#include <fstream>
#include <fcntl.h>
#include <unistd.h>

Mindopen::Mindopen(void): _bytes(new char[SIZE]), _bytesIndex(0), _strIndex(0)
{
	size_t  i = 0;
    while (i < SIZE)
    {
        _bytes[i] = 0;
        i++;
    }
}

Mindopen::Mindopen(Mindopen const &instance)
{
	*this = instance;
}

Mindopen::~Mindopen(void)
{
	//delete [] _bytes;
}

Mindopen &	Mindopen::operator=(Mindopen const &rhs)
{
    _bytes = rhs._bytes;
    _bytesIndex = rhs._bytesIndex;
    _strIndex = rhs._strIndex;
    _queue = rhs._queue;
	return *this;
}

bool    Mindopen::readFile(char *file)
{
	std::ifstream               stream;
    std::stringstream           buff;
    std::queue<IInstruction>    instrQueue;
    int                         fd;


    stream.open(file);
    // Prevents from opening symbolic links
    if ((fd = open(file, O_NOFOLLOW)) == -1 || close(fd) != 0 || stream.fail())
    {
        std::cerr << "Invalid file" << std::endl;
        return true;
    }
    buff << stream.rdbuf();
    stream.close();

    fillQueue(_queue, buff);
    return false;
}

void    Mindopen::fillQueue(std::queue<IInstruction*> & queue, std::stringstream &s)
{
    char    c;
    //std::cout << std::endl;
    while (s.get(c))
    {
        //std::cout << c;
        std::queue<IInstruction*>   queue2;
        switch (c)
        {
            case '<':
                queue.push(new DecrementPointer());
                break;
            case '>':
                queue.push(new IncrementPointer());
                break;
            case '+':
                queue.push(new IncrementByte());
                break;
            case '-':
                queue.push(new DecrementByte());
                break;
            case '.':
                queue.push(new ByteOut());
                break;
            case ',':
                queue.push(new ByteIn());
                break;
            case '[':
                //std::cout << std::endl << "Sous token";
                fillQueue(queue2, s);
                queue.push(new JumpTo(queue2, s));
                //std::cout << std::endl;
                break;
            case ']':
                return ;
            default:
                break;
        }
    }
}

void	Mindopen::execute()
{
    //std::cout << "Executing.." << std::endl;
	while (!_queue.empty())
    {
        //std::cout << "executing ";
        _queue.front()->execute(_bytes, _bytesIndex);
        //std::cout << "index = " << _bytesIndex << std::endl;
        _queue.pop();
        //std::cout << std::endl;
    }
    //std::cout << "Execute done." << std::endl;
}

void	Mindopen::execute(char *bytes, size_t & bytesIndex)
{
    //std::cout << "Executing.." << std::endl;
	while (!_queue.empty())
    {
        //std::cout << "executing " << std::endl;
        _queue.front()->execute(bytes, bytesIndex);
        //std::cout << "index = " << _bytesIndex << std::endl;
        _queue.pop();
    }
    //std::cout << "Execute done." << std::endl;
}