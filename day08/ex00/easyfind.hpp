/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 14:53:52 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/22 15:28:25 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
#include <iostream>

template < typename T >
int     easyfind(T const & t, int const & i)
{
    typename T::iterator    p = std::find(t.begin(), t.end(), i);
    if (p != t.end())
        return *p;
    throw std::exception();
}
#endif