/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:32:30 by msousa            #+#    #+#             */
/*   Updated: 2022/04/09 21:15:28 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/* Constructors */
MateriaSource::MateriaSource( void ) { /* no-op */ }
MateriaSource::MateriaSource( MateriaSource const & src ) { *this = src; }

/* Destructor */
MateriaSource::~MateriaSource( void ) { /* no-op */ }

/* Assignment operator */
MateriaSource &  MateriaSource::operator = ( MateriaSource const & rhs )
{
	if (this != &rhs) {
	}
	return *this;
}

void	MateriaSource::learnMateria( AMateria* m )
{
	int	i = 0;
	while (i < SOURCE_SIZE) {
		if (!source[i]) {
			source[i] = m->clone();
			break ;
		}
		i++;
	}
}

AMateria*	MateriaSource::createMateria( std::string const & type )
{
	AMateria*	m = 0;

	for (size_t i = 0; i < SOURCE_SIZE; i++) {
		if (source[i]->getType() == type) {
			m = source[i]->clone();
			break ;
		}
	}

	return m;
}

/* ostream override */
std::ostream &	operator << ( std::ostream & o, MateriaSource const & i )
{
	(void)i;
	o << "MateriaSource";
	return o;
}
