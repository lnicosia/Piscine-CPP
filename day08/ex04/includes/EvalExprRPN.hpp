/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EvalExprRPN.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 12:03:28 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/24 12:05:12 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVALEXPRRPN_HPP
# define EVALEXPRRPN_HPP

#include "AToken.hpp"
#include <list>

class EvalExprRPN
{
	public:
		EvalExprRPN(void);
		//EvalExprRPN(** replace parameters **);
		EvalExprRPN(EvalExprRPN const &instance);
		EvalExprRPN &operator=(EvalExprRPN const &rhs);
		~EvalExprRPN(void);
        void    parse(std::string);
        void    evaluate(void);

	private:
        std::list<AToken *>     _tokens;

};

#endif