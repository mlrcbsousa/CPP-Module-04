/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:29:03 by msousa            #+#    #+#             */
/*   Updated: 2022/04/08 18:30:26 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/* Constructors */
AMateria::AMateria( void ) { /* no-op */}
AMateria::AMateria( AMateria const & src ) { *this = src; }

/* Destructor */
AMateria::~AMateria( void ) { /* no-op */}

/* Assignment operator */
AMateria &  AMateria::operator = ( AMateria const & rhs )
{
	if (this != &rhs) {
		*this = rhs;
	}
	return *this;
}

/* ostream override */
std::ostream &  operator << ( std::ostream & o, AMateria const & i)
{
	(void)i;
	o << "AMateria";
	return o;
}
