/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 14:46:05 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/21 15:53:01 by lnicosia         ###   ########.fr       */
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

int     literalType(char *str)
{
    size_t  i = 0, period_count = 0, len = strlen(static_cast<const char *>(str));
    std::string argv = std::string(str);
    std::string floatOkValues[3] = { std::string("-inff"), std::string("+inff"), std::string("nanf") };
    std::string doubleOkValues[3] = { std::string("-inf"), std::string("+inf"), std::string("nan") };
    while (i < 3)
    {
        if (!argv.compare(static_cast<const std::string &>(floatOkValues[i])))
            return 1;
        if (!argv.compare(static_cast<const std::string &>(doubleOkValues[i])))
            return 2;
        i++;
    }
    i = 0;
    while (i < argv.size())
    {
        if (str[i] == '.')
            period_count++;
        else if (str[i] == 'f')
        {
            if (i == len - 1 && period_count == 1)
                return 1;
            else
                return -1;
        }
        else if (!isdigit(static_cast<int>(str[i])))
            return -1;
        i++;
    }
    if (period_count == 1)
        return 2;
    if (period_count > 1)
        return -1;
    return 0;
}

int     main(int ac, char **av)
{
    if (ac != 2 || literalType(av[1]) == -1)
    {
        std::cerr << "Please give one literal value" << std::endl;
        return 0;
    }
    switch (literalType(av[1]))
    {
        case 0:
            std::cout << "Integer" << std::endl;
            break;
        case 1:
            std::cout << "Float" << std::endl;
            break;
        case 2:
            std::cout << "Double" << std::endl;
            break;
    }
    size_t  len = 0;
    while (av[1][len])
        len++;
    return 0;
}