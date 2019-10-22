/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 14:59:49 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/22 15:34:14 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <set>

int main()
{
    std::set<int>  set;

    srand(static_cast<unsigned int>(time(NULL)));
    size_t  i = 0;
    while (i < 1000)
    {
        int value = rand() % 1000;
        set.insert(value);
        i++;
    }
    i = 0;
    while (i < 1000)
    {
        int value = rand() % 1000;
        std::cout << "Searching value " << value << std::endl << '\t';
        try
        {
            int find = easyfind(set, value);
            std::cout << "found it!" << std::endl;
            (void)find;
        }
        catch (std::exception e)
        {
            std::cout << "Not found" << std::endl;
        }
        i++;
    }
    return 0;
}