/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:29:03 by msousa            #+#    #+#             */
/*   Updated: 2022/04/10 18:49:38 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/* Constructors */
AMateria::AMateria( void ) { /* no-op */ }
AMateria::AMateria( std::string const & type ) : type(type) { /* no-op */ };
AMateria::AMateria( AMateria const & src ) { *this = src; }

/* Destructor */
AMateria::~AMateria( void ) { /* no-op */ }

/* Assignment operator */
AMateria &  AMateria::operator = ( AMateria const & rhs )
{
	LOG("AMateria Assignment operator called");
	(void)rhs;
	return *this;
}

std::string const &	AMateria::getType( void ) const { return type; }

void	AMateria::use( ICharacter & target )
{
	LOG("* use materia at " << target.getName() << " *");
}
