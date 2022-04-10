/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:32:30 by msousa            #+#    #+#             */
/*   Updated: 2022/04/10 19:08:57 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/* Constructors */
MateriaSource::MateriaSource( void )
{
	for (size_t i = 0; i < SOURCE_SIZE; i++)
		source[i] = NULL;
}

MateriaSource::MateriaSource( MateriaSource const & src ) { *this = src; }

/* Destructor */
MateriaSource::~MateriaSource( void )
{
	for (size_t i = 0; i < SOURCE_SIZE; i++)
		if (source[i]) delete source[i];
}

/* Assignment operator */
MateriaSource &  MateriaSource::operator = ( MateriaSource const & rhs )
{
	if (this != &rhs) {
		for (size_t i = 0; i < SOURCE_SIZE; i++) {
			if (source[i]) {
				delete source[i];
				source[i] = NULL;
			}
		}

		for (size_t i = 0; i < SOURCE_SIZE; i++)
			if (rhs.source[i]) source[i] = rhs.source[i]->clone();
	}
	return *this;
}

void	MateriaSource::learnMateria( AMateria* m )
{
	if (!m)
		return;

	for (size_t i = 0; i < SOURCE_SIZE; i++) {
		if (!source[i]) {
			source[i] = m;
			break ;
		}
	}
}

AMateria*	MateriaSource::createMateria( std::string const & type )
{
	AMateria*	m = NULL;

	for (size_t i = 0; i < SOURCE_SIZE; i++) {
		if (source[i] && source[i]->getType() == type) {
			m = source[i]->clone();
			break ;
		}
	}

	return m;
}
