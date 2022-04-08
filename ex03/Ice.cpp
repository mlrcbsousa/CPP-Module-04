/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:31:33 by msousa            #+#    #+#             */
/*   Updated: 2022/04/08 18:31:36 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

/* Constructors */
Ice::Ice( void ) { /* no-op */}
Ice::Ice( Ice const & src ) { *this = src; }

/* Destructor */
Ice::~Ice( void ) { /* no-op */}

/* Assignment operator */
Ice &  Ice::operator = ( Ice const & rhs )
{
	if (this != &rhs) {
		*this = rhs;
	}
	return *this;
}

/* ostream override */
std::ostream &  operator << ( std::ostream & o, Ice const & i)
{
	(void)i;
	o << "Ice";
	return o;
}
