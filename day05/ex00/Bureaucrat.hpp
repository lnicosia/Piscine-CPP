/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 19:19:23 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/16 19:41:11 by lnicosia         ###   ########.fr       */
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

	private:
        std::string const   _name;
        int                 _grade;
        
    class GradeTooHighException : public std::exception
    {
        public:
            virtual const char* what() const throw()
            {
                return "Grade is too high";
            }
    };
    class GradeTooLowException : public std::exception
    {
        public:
            virtual const char* what() const throw()
            {
                return "Grade is too low";
            }
    };
};

std::ostream&	operator<<(std::ostream &o, Bureaucrat const &instance);

#endif