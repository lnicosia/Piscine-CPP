/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <lnicosia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 10:25:16 by lnicosia          #+#    #+#             */
/*   Updated: 2019/10/16 16:25:07 by lnicosia         ###   ########.fr       */
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
    /*IMateriaSource* src = new MateriaSource();
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
    delete src;*/
    AMateria *xxx;

	IMateriaSource* src = new MateriaSource();
    xxx = new Ice();
	src->learnMateria(xxx);
	delete xxx;
	xxx = new Cure();
	src->learnMateria(xxx);
	delete xxx;

	ICharacter* zaz = new Character("zaz");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	zaz->equip(tmp);
	tmp = src->createMateria("cure");
	zaz->equip(tmp);
	ICharacter* bob = new Character("bob");
	zaz->use(0, *bob);
	zaz->use(1, *bob);


/* ************** own tests **************** */

	ICharacter* didier = new Character("didier");

	*didier = *zaz;
    
	std::cout << "dider = " << didier << std::endl;

	didier->use(0, *bob);
	didier->use(1, *bob); 
	didier->use(2, *bob); 
	didier->use(3, *bob);

    std::cout << "dider = " << didier << std::endl;

	MateriaSource *src1 = new MateriaSource();

	xxx = new Ice();
	src1->learnMateria(xxx);
	delete xxx;
	xxx = new Cure();
	src1->learnMateria(xxx);
	delete xxx;

	std::cout << "src1: " << src1 << std::endl;

	MateriaSource *src2 = new MateriaSource();

	*src2 = *src1;
	xxx = new Cure();
	src2->learnMateria(xxx);
	delete xxx;
	std::cout << "src2: " << src2 << std::endl;

	tmp = src2->createMateria("cure");
	didier->equip(tmp);
	didier->use(2, *bob);
	didier->use(24, *bob);
	didier->use(-4, *bob);

    std::cout << "dider = " << didier << std::endl;

	MateriaSource *src3 = new MateriaSource(*src1);

	xxx = new Cure();
	src3->learnMateria(xxx);
	delete xxx;
	std::cout << "src3: " << src3 << std::endl;

	tmp = src3->createMateria("cure");
	didier->equip(tmp);
	didier->use(2, *bob);

    std::cout << "dider = " << didier << std::endl;
    
	delete didier;
	delete src1;
	delete src2;
	delete src3;
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