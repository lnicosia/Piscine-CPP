/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 19:15:55 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/23 11:15:52 by lnicosia         ###   ########.fr       */
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
        MutantStack();
        virtual ~MutantStack();
        MutantStack(MutantStack const & intstance);
        MutantStack & operator=(MutantStack const & rhs);

        /*class iterator
        {
            public:
                iterator();
                ~iterator();
                iterator(iterator const & instance);
                iterator & operator=(iterator const & rhs);
                iterator & operator++(void);
                iterator & operator--(void);
                bool     operator!=(iterator const & rhs) const;
                MutantStack<T> & operator*(void);
            private:
        };
        
        iterator    begin();
        iterator    end();
        iterator    begin() const ;
        iterator    end() const;*/

        typedef typename    std::stack<T>::container_type::iterator iterator;

        //iterator    begin();
        //iterator    end();
        iterator    begin();
        iterator    end();
        
    private:
};

template < typename T>
std::ostream & operator<<(std::ostream & o, MutantStack<T> const & instance);

#endif