/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 19:33:53 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/21 20:29:33 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template < typename T>
void    swap(T & x, T & y)
{
    T tmp;
    tmp = x;
    x = y;
    y = tmp;
}

template < typename T>
T   min(T const & x, T const & y)
{
    return (x < y ? x : y);
}

template < typename T>
T   max(T const & x, T const & y)
{
    return (x > y ? x : y);
}

int main()
{
    /*double  d1 = 3.14, d2 = 3.15;
    int     i1 = 4, i2 = 4;
    std::cout << "Max(int) = " << max(i1, i2) << std::endl;
    std::cout << "Max(double) = " << max(d1, d2) << std::endl;
    std::cout << "Min(int) = " << min(i1, i2) << std::endl;
    std::cout << "Min(double) = " << min(d1, d2) << std::endl;
    std::cout << "Before swap: d1 = " << d1 << ", d2 = " << d2 << std::endl;
    swap(d1, d2);
    std::cout << "After swap: d1 = " << d1 << ", d2 = " << d2 << std::endl;*/

    int a = 2;
    int b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    return 0;
}