/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 10:35:08 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/16 15:13:13 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
	public:
		Character(void);
        Character(std::string name);
		Character(Character const &instance);
		Character &operator=(Character const &rhs);
		virtual ~Character(void);
        virtual std::string const & getName() const;
        virtual void equip(AMateria* m);
        virtual void unequip(int idx);
        virtual void use(int idx, ICharacter& target);

	private:
        AMateria*       _materias[4];
        std::string     _name;
        size_t          _index;
        void            _deleteMaterias();
};

#endif