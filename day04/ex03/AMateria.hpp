/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 09:59:56 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/16 14:43:02 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
    private:
        std::string     _type;
        unsigned int    _xp;
    public:
        AMateria();
        AMateria(AMateria const &instance);
        AMateria(std::string const & type);
        AMateria &operator=(AMateria const &rhs);
        virtual ~AMateria();
        std::string     const & getType() const; //Returns the materia type
        unsigned int    getXP() const; //Returns the Materias XP
        void            setType(std::string type);
        void            setXP(unsigned int xp);
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};
#endif