/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 19:19:23 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/17 09:59:59 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Form_HPP
# define Form_HPP

#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form(void);
		Form(std::string, std::string, int, int);
		Form(Form const &instance);
		Form &operator=(Form const &rhs);
		virtual ~Form(void);
        std::string const   getName() const;
        std::string         getTarget() const;
        int                 getMinSignGrade() const;
        int                 getMinExecGrade() const;
        bool                getSigned() const;
        void                beSigned(Bureaucrat &);
        void                executeCheck(Bureaucrat const &) const;
        virtual void        execute(Bureaucrat const & executor) const = 0;
        
        class GradeTooHighException : public std::exception
    {
        public:
            GradeTooHighException();
            GradeTooHighException(std::string const error);
            GradeTooHighException(GradeTooHighException const &instance);
            GradeTooHighException &operator=(GradeTooHighException const &rhs);
            virtual ~GradeTooHighException() throw();
            virtual const char* what() const throw();
        private:
            std::string const   _error;
    };
    class GradeTooLowException : public std::exception
    {
        public:
            GradeTooLowException();
            GradeTooLowException(std::string const error);
            GradeTooLowException(GradeTooLowException const &);
            GradeTooLowException &operator=(GradeTooLowException const &);
            virtual ~GradeTooLowException() throw();
            virtual const char* what() const throw();
        private:
            std::string const   _error;
    };
    class FormNotSignedException : public std::exception
    {
        private:

        public:
            FormNotSignedException();
            FormNotSignedException(FormNotSignedException const &);
            FormNotSignedException & operator=(FormNotSignedException const &);
            virtual ~FormNotSignedException() throw();
            virtual const char * what() const throw();
    };

	private:
        std::string const   _name;
        std::string         _target;
        bool                _signed;
        int const           _minSignGrade;
        int const           _minExecGrade;
};

std::ostream&	operator<<(std::ostream &o, Form const &instance);

#endif