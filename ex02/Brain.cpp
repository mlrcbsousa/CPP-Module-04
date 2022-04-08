/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:25:01 by msousa            #+#    #+#             */
/*   Updated: 2022/04/08 18:26:32 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/* Constructors */
Brain::Brain( void ) { /* no-op */}
Brain::Brain( Brain const & src ) { *this = src; }

/* Destructor */
Brain::~Brain( void ) { /* no-op */}

/* Assignment operator */
Brain &  Brain::operator = ( Brain const & rhs )
{
	if (this != &rhs) {
		*this = rhs;
	}
	return *this;
}

/* ostream override */
std::ostream &  operator << ( std::ostream & o, Brain const & i)
{
	(void)i;
	o << "Brain";
	return o;
}
