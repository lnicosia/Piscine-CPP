/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 21:42:04 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/22 14:08:20 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include "A.hpp"

template < typename T>
class Array
{
	public:
		Array<T>(void): _array(nullptr), _size(0)
        {
            //std::cout << "New default array (null, size=0)" << std::endl;
        }
        
		Array(unsigned int n): _array(new T[n]), _size(n)
        {
            //std::cout << "New array of size " << n;
            //std::cout << " and adress " << static_cast<void *>(this->_array) << std::endl;
            unsigned int    i = 0;
            while (i < n)
            {
                //std::cout << "Init index " << i << " by default" << std::endl;
                //this->_array[i] = T();
                i++;
            }
        }
        
		Array<T>(Array<T> const &instance)
        {
            *this = instance;
        }
        
		Array<T> &operator=(Array<T> const &rhs)
        {
            unsigned int  i = 0;
            if (this->_array)
                delete [] this->_array;
            this->_array = new T[rhs._size];
            this->_size = rhs._size;
            while (i < this->_size)
            {
                this->_array[i] = T(rhs._array[i]);
                i++;
            }
            return *this;
        }

        T &operator[](unsigned int idx)
        {
            if (idx > this->_size)
                throw std::exception();
            return this->_array[idx];
        }

		~Array<T>(void)
        {
            //std::cout << "Destructor called. size = " << this->_size << ", array address: " << static_cast<void *>(this->_array) << std::endl;
            if (this->_array)
                delete [] this->_array;
        }

        size_t  size() const
        {
            return this->_size;
        }

	private:
        T*              _array;
        unsigned int    _size;

};

#endif