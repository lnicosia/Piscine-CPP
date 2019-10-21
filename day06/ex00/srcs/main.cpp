/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 14:46:05 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/21 15:36:11 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctype.h>

void    print_char(char *str)
{
    //char    c;
    int     i;
    //float   f;
    //double  d;

    i = static_cast<int>(str[0]);
    std::cout << "char: ";
    if (isprint(i))
        std::cout << static_cast<char>(i);
    else
        std::cout << "Non displayable";
    std::cout << std::endl;
    std::cout << "int: " << std::endl;
    std::cout << "float: " << std::endl;
    std::cout << "double: " << std::endl;
}

bool     isLiteral(char *str)
{
    size_t  i = 0, period_count = 0;
    std::string argv = std::string(str);
    std::string okValues[6] = { std::string("-inf"), std::string("+inf"), std::string("nan"), std::string("-inff"), std::string("+inff"), std::string("nanf") };
    while (i < 6)
    {
        if (!argv.compare(static_cast<const std::string &>(okValues[i])))
            return true;
        i++;
    }
    i = 0;
    while (i < argv.size())
    {
        if (str[i] == '.')
            period_count++;
        else if (!isdigit(static_cast<int>(str[i])))
            return false;
        i++;
    }
    if (period_count > 1)
        return false;
    return true;
}

int     main(int ac, char **av)
{
    if (ac != 2 || !isLiteral(av[1]))
    {
        std::cerr << "Please give one literal value" << std::endl;
        return 0;
    }
    size_t  len = 0;
    while (av[1][len])
        len++;
    if (len == 1)
        print_char(av[1]);
    return 0;
}