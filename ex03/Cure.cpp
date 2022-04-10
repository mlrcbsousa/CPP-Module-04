/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:31:13 by msousa            #+#    #+#             */
/*   Updated: 2022/04/10 18:14:53 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

/* Constructors */
Cure::Cure( void ) : AMateria("cure") { /* no-op */ }
Cure::Cure( Cure const & src ) : AMateria("cure") { *this = src; }

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
