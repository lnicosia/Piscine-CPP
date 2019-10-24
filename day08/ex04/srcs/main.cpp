/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 11:44:10 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/24 16:16:41 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "EvalExprRPN.hpp"
#include <string>

int     main(int ac, char **av)
{
    if (ac != 2)
        return 0;
    EvalExprRPN e;
    e.parse(std::string(av[1]));
    e.printTokens();
    e.convertToRPN();
    e.printRPN();
    e.evaluate();
    return 0;
}