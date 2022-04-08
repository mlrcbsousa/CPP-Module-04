/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:17:50 by msousa            #+#    #+#             */
/*   Updated: 2022/04/08 18:18:06 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/* Constructors */
Animal::Animal( void ) { /* no-op */}
Animal::Animal( Animal const & src ) { *this = src; }

/* Destructor */
Animal::~Animal( void ) { /* no-op */}

/* Assignment operator */
Animal &  Animal::operator = ( Animal const & rhs )
{
	if (this != &rhs) {
		*this = rhs;
	}
	return *this;
}

/* ostream override */
std::ostream &  operator << ( std::ostream & o, Animal const & i)
{
	(void)i;
	o << "Animal";
	return o;
}
