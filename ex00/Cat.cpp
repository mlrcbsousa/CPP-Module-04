/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:18:54 by msousa            #+#    #+#             */
/*   Updated: 2022/04/08 18:19:03 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/* Constructors */
Cat::Cat( void ) { /* no-op */}
Cat::Cat( Cat const & src ) { *this = src; }

/* Destructor */
Cat::~Cat( void ) { /* no-op */}

/* Assignment operator */
Cat &  Cat::operator = ( Cat const & rhs )
{
	if (this != &rhs) {
		*this = rhs;
	}
	return *this;
}

/* ostream override */
std::ostream &  operator << ( std::ostream & o, Cat const & i)
{
	(void)i;
	o << "Cat";
	return o;
}
