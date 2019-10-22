/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 19:33:53 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/22 14:15:48 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

void    func()
{
    unsigned int i = 0, size = 15;
    
    std::cout << std::endl << "/*** TESTING WITH INT* ***/" << std::endl << std::endl;
    Array<int *>    a(size);

    while (i < size)
    {
        a[i] = new int();
        i++;
    }
    i = 0;
    while (i < size)
    {
        std::cout << "Content at " << i << " = " << a[i] << std::endl;
        i++;
    }

    std::cout << std::endl << "/*** TESTING WITH INT ***/" << std::endl << std::endl;
    size = 45;
    Array<int>    b(size);

    i = 0;
    srand(static_cast<unsigned int>(time(NULL)));
    while (i < size)
    {
        b[i] = rand() % 45;
        i++;
    }
    i = 0;
    while (i < size)
    {
        std::cout << "Content at " << i << " = " << b[i] << std::endl;
        i++;
    }

    std::cout << std::endl << "/*** TESTING WITH CLASS A ***/" << std::endl << std::endl;
    size = 3;
    Array<A>    c(size);

    std::cout << std::endl << "/*** TESTING WITH ARRAY OF STRING ***/" << std::endl << std::endl;
    i = 0;
    size = 3;
    Array< Array< std::string > >    d(size);
    std::cout << "\t--Filling--" << std::endl;
    while (i < size)
    {
        unsigned int    size2 = rand() % 4;
        std::cout << "New array of " << size2 << " strings at index " << i << std::endl;
        d[i] = Array<std::string>(size2);
        unsigned int    j = 0;
        while (j < size2)
        {
            d[i][j] = "bonjour";
            j++;
        }
        i++;
    }
    std::cout << "\t--Printing--" << std::endl;
    i = 0;
    while (i < size)
    {
        std::cout << "Index " << i << ": " << std::endl;
        unsigned int j = 0;
        while (j < d[i].size())
        {
            std::cout << '\t' << d[i][j] << std::endl;
            j++;
        }
        i++;
    }
}

int main()
{
    func();
    //while(1);
    return 0;
}