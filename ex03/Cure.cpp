/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:31:13 by msousa            #+#    #+#             */
/*   Updated: 2022/04/08 18:31:17 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

/* Constructors */
Cure::Cure( void ) { /* no-op */}
Cure::Cure( Cure const & src ) { *this = src; }

/* Destructor */
Cure::~Cure( void ) { /* no-op */}

/* Assignment operator */
Cure &  Cure::operator = ( Cure const & rhs )
{
	if (this != &rhs) {
		*this = rhs;
	}
	return *this;
}

/* ostream override */
std::ostream &  operator << ( std::ostream & o, Cure const & i)
{
	(void)i;
	o << "Cure";
	return o;
}
