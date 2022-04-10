/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:31:33 by msousa            #+#    #+#             */
/*   Updated: 2022/04/10 18:14:46 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

/* Constructors */
Ice::Ice( void ) : AMateria("ice") { /* no-op */ }
Ice::Ice( Ice const & src ) : AMateria("ice") { *this = src; }

/* Destructor */
Ice::~Ice( void ) { /* no-op */ }

/* Assignment operator */
Ice &	Ice::operator = ( Ice const & rhs )
{
	(void)rhs;
	return *this;
}

AMateria*	Ice::clone( void ) const { return new Ice(*this); }

void	Ice::use( ICharacter & target )
{
	LOG("* shoots an ice bolt at " << target.getName() << " *");
}
