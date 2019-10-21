/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 21:42:04 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/21 21:50:50 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template < typename T>
class Array
{
	public:
		Array<T>(void): _array(nullptr)
        {

        }
		Array(unsigned int n): _array(new T[n])
        {

        }
		Array<T>(Array<T> const &instance)
        {

        }
		Array<T> &operator=(Array<T> const &rhs)
        {
            size_t  i = 0, size = sizeof(this->_array);
            if (this->_array)
                delete this->array;
            while (i < size)
            {
                this->_array[i] = rhs._array[i];
                i++;
            }
        }
		~Array<T>(void)
        {
            
        }

	private:
        T*  _array;

};

#endif