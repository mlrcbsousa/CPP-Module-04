/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:30:50 by msousa            #+#    #+#             */
/*   Updated: 2022/04/10 18:16:44 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/* Constructors */
Character::Character( void ) { /* no-op */ }
Character::Character( std::string const & name ) : name(name) { /* no-op */ };
Character::Character( Character const & src ) { *this = src; }

/* Destructor */
Character::~Character( void )
{
	for (size_t i = 0; i < INVENTORY_SIZE; i++)
		if (inventory[i]) delete inventory[i];
}

/* Assignment operator */
Character &  Character::operator = ( Character const & rhs )
{
	if (this != &rhs) {
		name = rhs.name;

		for (size_t i = 0; i < INVENTORY_SIZE; i++)
			if (inventory[i]) delete inventory[i];

		for (size_t i = 0; i < INVENTORY_SIZE; i++)
			if (rhs.inventory[i]) inventory[i] = rhs.inventory[i]->clone();
	}
	return *this;
}

std::string const &	Character::getName( void ) const { return name; }

void	Character::equip( AMateria* m )
{
	int	i = 0;
	while (i < INVENTORY_SIZE) {
		if (!inventory[i]) {
			inventory[i] = m;
			break ;
		}
		i++;
	}

	// if didn't set it
	if (i == INVENTORY_SIZE) {

	}
}

void	Character::unequip( int idx )
{
	if (idx < 0 || idx >= INVENTORY_SIZE) {
		return ;
	}

	AMateria*	m = inventory[idx];

	if (m)
		inventory[idx] = 0;
}

void	Character::use( int idx, ICharacter & target )
{
	if (idx < 0 || idx >= INVENTORY_SIZE) {
		return ;
	}

	AMateria*	m = inventory[idx];

	if (m)
		m->use(target);
}
