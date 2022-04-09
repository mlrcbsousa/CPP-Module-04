/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:31:13 by msousa            #+#    #+#             */
/*   Updated: 2022/04/09 20:16:10 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

/* Constructors */
Cure::Cure( void ) : AMateria("cure") { /* no-op */ }
Cure::Cure( Cure const & src ) { *this = src; }

/* Destructor */
Cure::~Cure( void ) { /* no-op */ }

/* Assignment operator */
Cure &  Cure::operator = ( Cure const & rhs )
{
	(void)rhs;
	return *this;
}

AMateria*	Cure::clone( void ) const { return new Cure(*this); }

void	Cure::use( ICharacter & target )
{
	LOG("* heals " << target.getName() << "’s wounds *");
}

/* ostream override */
std::ostream &  operator << ( std::ostream & o, Cure const & i)
{
	(void)i;
	o << "Cure";
	return o;
}
