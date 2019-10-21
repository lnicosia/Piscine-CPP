/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 17:57:32 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/21 18:57:11 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Data
{
    std::string s1;
    int n;
    std::string s2;
};

void *  serialize(void)
{
    srand(static_cast<unsigned int>(time(NULL)));
    char    s1[8];
    int     nb = rand();
    char    s2[8];
    size_t  i = 0;
    while (i < 8)
    {
        s1[i] = rand() % 10 + 48;
        s2[i] = rand() % 10 + 48;
        i++;
    }
    std::cout << "s1 = \"";
    i = 0;
    while (i < 8)
    {
        std::cout << s1[i];
        i++;
    }
    std::cout << "\"" << std::endl;
    std::cout << "int = " << nb << std::endl;
    std::cout << "s2 = \"";
    i = 0;
    while (i < 8)
    {
        std::cout << s2[i];
        i++;
    }
    std::cout << "\"" << std::endl;
    char *res = new char[20];
    i = 0;
    while (i < 8)
    {
        if (i < 4)
            res[i + 8] = reinterpret_cast<char *>(&nb)[i];
        res[i] = reinterpret_cast<char *>(s1)[i];
        res[i + 12] = reinterpret_cast<char *>(s2)[i];
        i++;
    }
    return reinterpret_cast<void *>(res);
}

Data * deserialize( void * raw )
{
    struct Data *res = new Data;
    char *strGetter = reinterpret_cast<char *>(raw);
    int *   intGetter = reinterpret_cast<int *>(strGetter + 8);
    res->s1 = std::string(static_cast<const char *>(strGetter), 8);
    res->n = *(intGetter);
    res->s2 = std::string(static_cast<const char *>(strGetter) + 12, 8);
    return res;
}

int main()
{
    std::cout << "/*** SERIALIZING ***/" << std::endl << std::endl;
    void *  bytes = serialize();

    std::cout << std::endl << "/*** DESERIALIZING ***/" << std::endl << std::endl;
    Data *res = deserialize(bytes);
    std::cout << "s1 = \"" << res->s1 << "\"" << std::endl;
    std::cout << "int = " << res->n << std::endl;
    std::cout << "s1 = \"" << res->s2 << "\"" << std::endl;
    return 0;
}