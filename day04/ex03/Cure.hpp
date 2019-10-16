/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 10:12:29 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/16 11:46:02 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure(void);
 		Cure(Cure const &instance);
		Cure &operator=(Cure const &rhs);
		virtual ~Cure(void);
		virtual Cure* clone() const;
		virtual void use(ICharacter& target);

	private:

};

#endif