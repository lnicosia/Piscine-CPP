/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 11:22:17 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/15 12:22:50 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include "Victim.hpp"

class Sorcerer
{
	public:
		Sorcerer(std::string name, std::string title);
		Sorcerer(Sorcerer const &instance);
		Sorcerer &operator=(Sorcerer const &rhs);
		~Sorcerer(void);

        void        polymorph(Victim const & victim) const;

        std::string getTitle(void) const;
        std::string getName(void) const;
        void        setName(std::string name);
        void        setType(std::string title);

	private:
		Sorcerer(void);
        std::string _name;
        std::string _title;
};

std::ostream&   operator<<(std::ostream &o, Sorcerer const &instance);

#endif