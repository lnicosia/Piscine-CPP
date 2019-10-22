/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 19:15:55 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/22 20:42:56 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <iterator>

template < typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack<T>();
        ~MutantStack<T>();

        class iterator
        {
            public:
                iterator();
                ~iterator();
                iterator & operator++(void);
                iterator & operator--(void);
                bool     operator!=(MutantStack<T>::iterator const & rhs) const;
                MutantStack<T> & operator*(void);
            private:
        };
        
        MutantStack<T>::iterator    begin();
        MutantStack<T>::iterator    end();
        MutantStack<T>::iterator    begin() const ;
        MutantStack<T>::iterator    end() const;
        
    private:
};

template < typename T>
std::ostream & operator<<(std::ostream & o, MutantStack<T> const & instance);

#endif