/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 14:46:05 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/21 19:15:04 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctype.h>
#include <math.h>
#include <iomanip>

void    overflowingInputError(void)
{
    std::cout << "char: impossible" << std::endl << "int: impossible" << std::endl << "float: impossible" << std::endl << "double: impossible" << std::endl;
}

void    printInteger(char *str)
{
    int i;
    // Overflow test
    long val = strtol(str, 0, 10);
    if (((val == LONG_MIN && errno == ERANGE) || val < INT_MIN)
        || ((val == LONG_MAX && errno == ERANGE) || val > INT_MAX))
    {
        overflowingInputError();
        return ;
    }
    else
        i = atoi(str);

    // Char part
    std::cout << "char: ";
    if (i > CHAR_MAX || i < CHAR_MIN)
        std::cout << "impossible";
    else if (isprint(i))
        std::cout << "'" << static_cast<char>(i) << "'";
    else
        std::cout << "Non displayable";
    std::cout << std::endl;
    
    // Int part
    std::cout << "int: " << i << std::endl;

    // Float part
    std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;

    // Double part
    std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
}

void    floatSpecialCases(std::string str)
{
    std::cout << "char: impossible" << std::endl << "int: impossible" << std::endl << "float: " << str << "f" << std::endl << "double: " << str << std::endl;
    exit(0);
}

void    printFloat(char *str)
{
    float   f;

    try
    {
        f = std::stof(static_cast<const std::string &>(std::string(str)));
        // Char part
        std::cout << "char: ";
        if (f > CHAR_MAX || f < CHAR_MIN)
            std::cout << "impossible";
        else if (isprint(static_cast<int>(f)))
            std::cout << "'" << static_cast<char>(f) << "'";
        else
            std::cout << "Non displayable";
        std::cout << std::endl;
        
        // Int part
        std::cout << "int: ";
        if (f > INT_MAX || f < INT_MIN)
            std::cout << "impossible";  
        else
            std::cout << static_cast<int>(f);
        std::cout << std::endl;

        // Float part
        std::cout << std::fixed;
        float  garbage;
        if (modf(f, &garbage) == 0)
            std::cout << std::setprecision(1);
        std::cout << "float: " << f << "f" << std::endl;

        // Double part
        std::cout << "double: " << static_cast<double>(f) << std::endl;
    }
    catch (std::out_of_range e)
    {
        overflowingInputError();
        return ;
    }
}

void    printDouble(char *str)
{
    double  d;

    try
    {
        d = std::stod(static_cast<const std::string &>(std::string(str)));
        // Char part
        std::cout << "char: ";
        if (d > CHAR_MAX || d < CHAR_MIN)
            std::cout << "impossible";
        else if (isprint(static_cast<int>(d)))
            std::cout << "'" << static_cast<char>(d) << "'";
        else
            std::cout << "Non displayable";
        std::cout << std::endl;
        
        // Int part
        std::cout << "int: ";
        if (d > INT_MAX || d < INT_MIN)
            std::cout << "impossible";  
        else
            std::cout << static_cast<int>(d);
        std::cout << std::endl;

        // Float part
        std::cout << std::fixed;
        double  garbage;
        if (modf(d, &garbage) == 0)
            std::cout << std::setprecision(1);
        std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;

        // Double part
        std::cout << "double: " << d << std::endl;
    }
    catch (std::out_of_range e)
    {
        overflowingInputError();
        return ;
    }
}

int     literalType(char *str)
{
    size_t  i = 0, period_count = 0, len = strlen(static_cast<const char *>(str));
    std::string argv = std::string(str);
    if ((len == 1 && !argv.compare(static_cast<const std::string &>(std::string(".")))) || (len == 2 && !argv.compare(static_cast<const std::string &>(std::string(".f")))))
        return -1;
    std::string floatOkValues[3] = { std::string("-inff"), std::string("+inff"), std::string("nanf") };
    std::string doubleOkValues[3] = { std::string("-inf"), std::string("+inf"), std::string("nan") };
    while (i < 3)
    {
        if (!argv.compare(static_cast<const std::string &>(floatOkValues[i])) || !argv.compare(static_cast<const std::string &>(doubleOkValues[i])))
            floatSpecialCases(doubleOkValues[i]);
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
        else if (str[i] == '-')
        {
            if (i > 0)
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
            printInteger(av[1]);
            break;
        case 1:
            std::cout << "Float" << std::endl;
            printFloat(av[1]);
            break;
        case 2:
            std::cout << "Double" << std::endl;
            printDouble(av[1]);
            break;
    }
    size_t  len = 0;
    while (av[1][len])
        len++;
    return 0;
}