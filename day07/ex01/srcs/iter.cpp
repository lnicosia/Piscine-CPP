/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 19:33:53 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/21 21:38:15 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template < typename T>
void    incr(T param)
{
    param++;
}

template < typename T >
void    iter(T *array, size_t len, void (*func)(T &))
{
    size_t  i = 0;
    while (i < len)
    {
        func(array[i]);
        i++;
    }
}

int main()
{
    std::cout << std::endl << "/*** TESTING WITH INT ***/" << std::endl << std::endl;
    int array[] = {4, 564, -75, 0, 45};
    size_t  i = 0;
    std::cout << "Array before iter: " << std::endl;
    while (i < 5)
    {
        std::cout << array[i] << ", ";
        i++;
    }
    std::cout << std::endl;
    iter(array, 5, incr);
    std::cout << "Array after iter: " << std::endl;
    i = 0;
    while (i < 5)
    {
        std::cout << array[i] << ", ";
        i++;
    }
    std::cout << std::endl;

    std::cout << std::endl << "/*** TESTING WITH CHAR ***/" << std::endl << std::endl;
    char str[] = "Bonjour";
    std::cout << "Array before iter: " << str << std::endl;
    iter(str, sizeof(str) - 1, incr);
    std::cout << "Array after iter: " << str << std::endl;
    return 0;
}