/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 19:19:23 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/17 09:59:59 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>

class Bureaucrat
{
	public:
		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &instance);
		Bureaucrat &operator=(Bureaucrat const &rhs);
		~Bureaucrat(void);
        std::string const   getName() const;
        int                 getGrade() const;
        void                setGrade(int grade);
        void                incrGrade();
        void                decrGrade();
        
        class GradeTooHighException : public std::exception
    {
        public:
            GradeTooHighException();
            GradeTooHighException(GradeTooHighException const &instance);
            GradeTooHighException &operator=(GradeTooHighException const &rhs);
            virtual ~GradeTooHighException() throw();
            virtual const char* what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        public:
            GradeTooLowException();
            GradeTooLowException(GradeTooLowException const &instance);
            GradeTooLowException &operator=(GradeTooLowException const &rhs);
            virtual ~GradeTooLowException() throw();
            virtual const char* what() const throw();
    };

	private:
        std::string const   _name;
        int                 _grade;
        
};

std::ostream&	operator<<(std::ostream &o, Bureaucrat const &instance);

#endif