/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:25:01 by msousa            #+#    #+#             */
/*   Updated: 2022/04/08 20:53:40 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/* Constructors */
Brain::Brain( void ) { LOG("Brain Default constructor called"); }

Brain::Brain( Brain const & src )
{
	LOG("Brain Copy constructor called");
	*this = src;
}

/* Destructor */
Brain::~Brain( void ) { LOG("Brain destructor called"); }

/* Assignment operator */
Brain &  Brain::operator = ( Brain const & rhs )
{
	LOG("Brain Assignment operator called");
	if (this != &rhs) {
		// type = rhs.type;
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
