/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 15:50:10 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/22 18:52:29 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <iostream>
#include <array>

# define SIZE 1000

int     main()
{
    Span    sp = Span(SIZE);
    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << "List content:" << std::endl;
    sp.printContent();
    std::cout << std::endl;
    std::list<int> tab;
    size_t i = 0;
    srand(static_cast<unsigned int>(time(NULL)));
    while (i < SIZE - 5)
    {
        tab.push_back(rand() % SIZE);
        i++;
    }
    sp.addNumber(tab.begin(), tab.end());
    std::cout << "List content after big add " << std::endl;
    sp.printContent();
    std::cout << std::endl;
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    return 0;
}