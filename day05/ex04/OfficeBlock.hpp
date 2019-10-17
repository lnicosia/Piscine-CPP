/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 15:01:50 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/17 16:06:36 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OFFICEBLOCK_HPP
# define OFFICEBLOCK_HPP

#include "Intern.hpp"

class OfficeBlock
{
	public:
		OfficeBlock(void);
		OfficeBlock(Intern* intern, Bureaucrat *signer, Bureaucrat *executer);
		~OfficeBlock(void);
        void        setIntern(Intern*);
        void        setSigner(Bureaucrat*);
        void        setExecuter(Bureaucrat*);
        void        doBureaucracy(std::string name, std::string target );

        class NullPointerException : public std::exception
        {
            public:
                NullPointerException();
                NullPointerException(NullPointerException const &instance);
                NullPointerException &operator=(NullPointerException const &rhs);
                virtual ~NullPointerException() throw();
                virtual const char* what() const throw();
        };
        
	private:
        OfficeBlock(OfficeBlock const & instance);
        OfficeBlock & operator=(OfficeBlock const & rhs);
        Intern*     _intern;
        Bureaucrat* _signer;
        Bureaucrat* _executer;

};

#endif