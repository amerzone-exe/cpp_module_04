/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 18:21:00 by jpiquet           #+#    #+#             */
/*   Updated: 2026/01/23 19:49:09 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "Burn.hpp"

int main(void)
{
	// /*-----------Basic subject test-----------*/

	// IMateriaSource *src = new MateriaSource();
	
	// src->learnMateria(new Ice());
	// src->learnMateria(new Cure());
	
	// ICharacter *me = new Character("me");

	// AMateria *tmp;
	// tmp = src->createMateria("ice");
	// me->equip(tmp);
	// tmp = src->createMateria("cure");
	// me->equip(tmp);
	
	// ICharacter *bob = new Character("bob");
	// me->use(0, *bob);
	// me->use(1, *bob);
	
	// delete bob;
	// delete me;
	// delete src;

	IMateriaSource *src = new MateriaSource();
	std::cout << std::endl;
	
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Burn());
	std::cout << std::endl;

	ICharacter *me = new Character("Gontran");
	std::cout << std::endl;
	
	// std::cout << "ERROR" << std::endl;
	me->equip(src->createMateria("bonjour"));
	me->equip(src->createMateria("ice"));
	me->equip(src->createMateria("cure"));
	me->equip(src->createMateria("ice"));
	me->equip(src->createMateria("cure"));
	me->equip(src->createMateria("ice"));
	std::cout << std::endl;

	ICharacter *frederic = new Character("frederic");
	std::cout << std::endl;

	me->use(0, *frederic);
	me->use(1, *frederic);
	me->use(2, *frederic);
	me->use(3, *frederic);
	me->use(5, *frederic);
	std::cout << std::endl;

	me->unequip(0);
	me->unequip(1);
	me->unequip(2);
	me->unequip(3);
	// me->unequip(1);
	std::cout << std::endl;

	Character::emptyTrash();
	
	
	delete me;
	delete frederic;
	delete src;

	return 0;
}

// int main