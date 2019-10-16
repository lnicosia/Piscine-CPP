/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 12:10:17 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/16 12:17:20 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const &instance);
		MateriaSource &operator=(MateriaSource const &rhs);
		virtual ~MateriaSource(void);
        virtual void learnMateria(AMateria*);
        virtual AMateria* createMateria(std::string const & type);

	private:
        AMateria*       _materias[4];
};

#endif