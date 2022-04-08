/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:19:43 by msousa            #+#    #+#             */
/*   Updated: 2022/04/08 18:19:49 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/* Constructors */
Dog::Dog( void ) { /* no-op */}
Dog::Dog( Dog const & src ) { *this = src; }

/* Destructor */
Dog::~Dog( void ) { /* no-op */}

/* Assignment operator */
Dog &  Dog::operator = ( Dog const & rhs )
{
	if (this != &rhs) {
		*this = rhs;
	}
	return *this;
}

/* ostream override */
std::ostream &  operator << ( std::ostream & o, Dog const & i)
{
	(void)i;
	o << "Dog";
	return o;
}
