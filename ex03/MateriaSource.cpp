/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:32:30 by msousa            #+#    #+#             */
/*   Updated: 2022/04/09 20:48:32 by msousa           ###   ########.fr       */
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

/* ostream override */
std::ostream &	operator << ( std::ostream & o, MateriaSource const & i )
{
	(void)i;
	o << "MateriaSource";
	return o;
}
