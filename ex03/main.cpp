/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:20:00 by msousa            #+#    #+#             */
/*   Updated: 2022/04/10 18:52:13 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MateriaSource.hpp"
# include "Ice.hpp"
# include "Cure.hpp"
# include "Character.hpp"

int	main( void )
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);			/* [I, -, -, -] */
    tmp = src->createMateria("cure");
    me->equip(tmp);			/* [I, C, -, -] */

	// deep copy
	ICharacter* bob = new Character("bob");
	delete bob;

	// equip too much
	AMateria *cure = new Cure;
	AMateria *ice = new Ice;

	me->equip(cure);		/* [I, C, C, -] */
	me->equip(ice);			/* [I, C, C, I] */
	me->equip(cure);		/* - */
	me->equip(ice);			/* - */

	// use materias
	bob = new Character("bob");

	me->use(0, *bob);		/* shoots an ice bolt at bob */
    me->use(1, *bob);		/* heals bob’s wounds */
    me->use(2, *bob);		/* heals bob’s wounds */
    me->use(3, *bob);		/* shoots an ice bolt at bob */
    me->use(10, *bob);		/* - */
    me->use(-1, *bob);		/* - */

	// unequip materias
	me->unequip(2);
	me->unequip(3);

	me->use(0, *bob);		/* shoots an ice bolt at bob */
	me->use(1, *bob);		/* heals bob’s wounds */
	me->use(2, *bob);		/* - */
	me->use(3, *bob);		/* - */
	me->use(10, *bob);		/* - */
	me->use(-1, *bob);		/* - */

	// re-equip materias
	me->equip(ice);			/* [I, C, I, -] */
	me->equip(cure);		/* [I, C, I, C] */

	me->use(0, *bob);		/* shoots an ice bolt at bob */
	me->use(1, *bob);		/* heals bob’s wounds */
	me->use(2, *bob);		/* shoots an ice bolt at bob */
	me->use(3, *bob);		/* heals bob’s wounds */
	me->use(10, *bob);		/* - */
	me->use(-1, *bob);		/* - */

	delete bob;
	delete me;
	delete src;

	return 0;
}
