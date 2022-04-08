/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:30:50 by msousa            #+#    #+#             */
/*   Updated: 2022/04/08 18:30:58 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/* Constructors */
Character::Character( void ) { /* no-op */}
Character::Character( Character const & src ) { *this = src; }

/* Destructor */
Character::~Character( void ) { /* no-op */}

/* Assignment operator */
Character &  Character::operator = ( Character const & rhs )
{
	if (this != &rhs) {
		*this = rhs;
	}
	return *this;
}

/* ostream override */
std::ostream &  operator << ( std::ostream & o, Character const & i)
{
	(void)i;
	o << "Character";
	return o;
}
