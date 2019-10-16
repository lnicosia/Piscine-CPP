/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 09:59:56 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/16 11:58:23 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
    protected:
        std::string     _type;
    private:
        unsigned int    _xp;
    public:
        AMateria();
        AMateria(std::string const & type);
        virtual ~AMateria();
        std::string     const & getType() const; //Returns the materia type
        unsigned int    getXP() const; //Returns the Materias XP
        void            setType(std::string type);
        void            setXP(unsigned int xp);
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};
#endif