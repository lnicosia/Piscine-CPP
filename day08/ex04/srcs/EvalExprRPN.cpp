/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EvalExprRPN.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 13:20:57 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/24 15:26:29 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "EvalExprRPN.hpp"
#include <string>
#include <stdlib.h>
#include <ctype.h>
#include <iostream>
#include "NumToken.hpp"
#include "AddToken.hpp"
#include "SubToken.hpp"
#include "MulToken.hpp"
#include "DivToken.hpp"
#include "OpenParToken.hpp"
#include "CloseParToken.hpp"
#include <iterator>
#include <stack>

EvalExprRPN::EvalExprRPN(void)
{

}

EvalExprRPN::EvalExprRPN(EvalExprRPN const &instance)
{
	*this = instance;
}

EvalExprRPN::~EvalExprRPN(void)
{

}

/*EvalExprRPN::EvalExprRPN(** replace parameters **)
  {

  }*/

EvalExprRPN &	EvalExprRPN::operator=(EvalExprRPN const &rhs)
{
	(void)rhs;
	return *this;
}

void	EvalExprRPN::parse(std::string expr)
{
	size_t  i = 0, size = expr.size(), nbSize = 0;
	while (i < size)
	{
		if (expr[i] >= '0' && expr[i] < '9')
		{
			long val = strtol(expr.c_str() + i, 0, 10);
			if (((val == LONG_MIN && errno == ERANGE) || val < INT_MIN)
					|| ((val == LONG_MAX && errno == ERANGE) || val > INT_MAX))
			{
				std::cerr << "Input value is too big" << std::endl;
				exit (0);
			}
			if (!val)
				nbSize = 0;
			else
			{
				long tmp = val;
				while (tmp != 0)
				{
					tmp /= 10;
					nbSize++;
				}
			}

			_tokens.push_back(new NumToken(expr.substr(i, nbSize), static_cast<int>(val)));
		}
		else
		{
			switch (expr[i])
			{
				case '+':
					_tokens.push_back(new AddToken());
					break;
				case '-':
					_tokens.push_back(new SubToken());
					break;
				case '*':
					_tokens.push_back(new MulToken());
					break;
				case '/':
					_tokens.push_back(new DivToken());
					break;
				case '(':
					_tokens.push_back(new OpenParToken());
					break;
				case ')':
					_tokens.push_back(new CloseParToken());
					break;
				case ' ':
					break;
				default:
					std::cerr << "Invalid char: \'" << expr[i] << "\'" << std::endl;
					break;
			}
		}
		i++;
	}
}

void	EvalExprRPN::printTokens(void) const
{
	std::list<AToken *>::const_iterator it = _tokens.begin();
	std::list<AToken *>::const_iterator ite = _tokens.end();
	std::cout << "Tokens: ";
	while (it != ite)
	{
		(*it)->print();
		std::cout << " ";
		it++;
	}
	std::cout << std::endl;
}

void	EvalExprRPN::printRPN(void) const
{
	std::list<AToken *>::const_iterator it = _rpn.begin();
	std::list<AToken *>::const_iterator ite = _rpn.end();
	std::cout << "Postfix: ";
	while (it != ite)
	{
		(*it)->print();
		std::cout << " ";
		it++;
	}
	std::cout << std::endl;
}

void	EvalExprRPN::convertToRPN(void)
{
	std::stack<OpToken *>	stack;
	std::list<AToken *>::const_iterator it = _tokens.begin();
	std::list<AToken *>::const_iterator ite = _tokens.end();
	OpToken*	top;
	OpToken*	curr;
	while (it != ite)
	{
		size_t	type = (*it)->getType();
		//std::cout << "Current token = ";
		//(*it)->print();
		//std::cout << ", type = " << (*it)->getType();
		switch (type)
		{
			case 0: // Number
				_rpn.push_back(*it);
				break;
			case 1: // Op
				curr = static_cast<OpToken *>(*it);
				while (!stack.empty() && (top = stack.top()) && top->getType() == 1
					&& curr->getPrecedence() <= top->getPrecedence())
				{
					_rpn.push_back(top);
					stack.pop();
				}
				stack.push(curr);
				break;
			case 2: // Open par
				curr = static_cast<OpToken *>(*it);
				stack.push(curr);
				break;
			case 3: // Close par
				curr = static_cast<OpToken *>(*it);
				while (!stack.empty() && stack.top()->getType() != 2)
				{
					_rpn.push_back(stack.top());
					stack.pop();
				}
                if (!stack.empty() && stack.top()->getType() == 2)
				    stack.pop();
				break;
			default:
				//std::cerr << "Token type error" << std::endl;
				exit(0);
				break;
		}
		//std::cout << std::endl;
		it++;
	}
	while (!stack.empty())
	{
		_rpn.push_back(stack.top());
		stack.pop();
	}
}

void	EvalExprRPN::evaluate(void)
{
	std::list<AToken *>::const_iterator it = _rpn.begin();
	std::list<AToken *>::const_iterator ite = _rpn.end();
	std::stack<int>	stack;
	std::stack<int>	tmp;
	OpToken		*currOp;
	NumToken	*currNum;
	int		ghs;
	int		rhs;
	int		res;
	std::cout << "+---------------------+" << std::endl;
	while (it != ite)
	{
		std::cout << "| ";
		(*it)->print();
		if ((*it)->getType() == 1)
			std::cout << " ";
		std::cout << " | ";
		switch ((*it)->getType())
		{
			case 0:
				currNum = static_cast<NumToken *>(*it);
				std::cout << "Push      ";
				stack.push(currNum->getValue());
				break;
			case 1:
				currOp = static_cast<OpToken *>(*it);
				rhs = stack.top();
				stack.pop();
				ghs = stack.top();
				stack.pop();
				stack.push(currOp->op(ghs, rhs));
				switch(currOp->getContent()[0])
				{
					case '+':
						std::cout << "Add       ";
						break;
					case '-':
						std::cout << "Substract ";
						break;
					case '/':
						std::cout << "Divide    ";
						break;
					case '*':
						std::cout << "Multiply  ";
						break;
				}
				break;
		}
		std::cout << " | Stack:";
		tmp = stack;
		while (!tmp.empty())
		{
			std::cout << " " << (res = tmp.top());
			tmp.pop();
		}
		std::cout << std::endl;
		it++;
	}
	std::cout << "+---------------------+" << std::endl;
	std::cout << "Result = " << res << std::endl;
}
