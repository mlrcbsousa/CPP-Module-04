/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:26:42 by msousa            #+#    #+#             */
/*   Updated: 2022/04/08 18:27:11 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

/* Constructors */
AAnimal::AAnimal( void ) { /* no-op */}
AAnimal::AAnimal( AAnimal const & src ) { *this = src; }

/* Destructor */
AAnimal::~AAnimal( void ) { /* no-op */}

/* Assignment operator */
AAnimal &  AAnimal::operator = ( AAnimal const & rhs )
{
	if (this != &rhs) {
		*this = rhs;
	}
	return *this;
}

/* ostream override */
std::ostream &  operator << ( std::ostream & o, AAnimal const & i)
{
	(void)i;
	o << "AAnimal";
	return o;
}
