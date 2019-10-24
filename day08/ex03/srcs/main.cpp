/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 11:19:17 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/24 11:37:06 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Mindopen.hpp"
#include <iostream>

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Please enter a file to parse Mindopen code from." << std::endl;
        return 0;
    } 
    Mindopen    mo;
    if (mo.readFile(av[1]))
        return -1;
    mo.execute();
    //std::cout << std::endl;
    return 0;
}