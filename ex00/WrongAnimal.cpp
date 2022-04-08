/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:27:51 by msousa            #+#    #+#             */
/*   Updated: 2022/04/08 18:27:56 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/* Constructors */
WrongAnimal::WrongAnimal( void ) { /* no-op */}
WrongAnimal::WrongAnimal( WrongAnimal const & src ) { *this = src; }

/* Destructor */
WrongAnimal::~WrongAnimal( void ) { /* no-op */}

/* Assignment operator */
WrongAnimal &  WrongAnimal::operator = ( WrongAnimal const & rhs )
{
	if (this != &rhs) {
		*this = rhs;
	}
	return *this;
}

/* ostream override */
std::ostream &  operator << ( std::ostream & o, WrongAnimal const & i)
{
	(void)i;
	o << "WrongAnimal";
	return o;
}
