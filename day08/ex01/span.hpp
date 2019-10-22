/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 15:43:05 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/22 18:39:15 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <list>

class Span
{

    public:
        Span();
        Span(Span const & instance);
        Span(unsigned int N);
        Span & operator=(Span const & rhs);
        ~Span();

        void    addNumber(int nb);
        void    addNumber(std::list<int>::iterator, std::list<int>::iterator);
        int     shortestSpan(void) const;
        int     longestSpan(void) const;
        void    printContent(void) const;
        
    private:
        std::list<int>  _list;
        unsigned int    _N;
};


#endif