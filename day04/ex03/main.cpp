/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 10:25:16 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/16 15:37:42 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

void    func()
{
    IMateriaSource* src = new MateriaSource();
    AMateria *amat = new Ice();
    src->learnMateria(amat);
    delete amat;
    amat = new Cure();
    src->learnMateria(amat);
    delete amat;
    ICharacter* zaz = new Character("zaz");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    zaz->equip(tmp);
    tmp = src->createMateria("cure");
    zaz->equip(tmp);
    ICharacter* bob = new Character("bob");
    zaz->use(0, *bob);
    zaz->use(1, *bob);
    delete bob;
    delete zaz;
    delete src;
}

int main()
{
    func();
    while (1);
    return 0;
}