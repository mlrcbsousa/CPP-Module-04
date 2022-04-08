/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:19:43 by msousa            #+#    #+#             */
/*   Updated: 2022/04/08 20:50:08 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/* Constructors */
Dog::Dog( void ) : Animal("Dog") { LOG("Dog Default constructor called"); }

Dog::Dog( Dog const & src )
{
	LOG("Dog Copy constructor called");
	*this = src;
}

/* Destructor */
Dog::~Dog( void ) { LOG("Dog destructor called"); }

/* Assignment operator */
Dog &  Dog::operator = ( Dog const & rhs )
{
	LOG("Dog Assignment operator called");
	if (this != &rhs) {
		type = rhs.type;
	}
	return *this;
}

void	Dog::makeSound( void ) const { LOG("Woof"); }

/* ostream override */
std::ostream &  operator << ( std::ostream & o, Dog const & i)
{
	(void)i;
	o << "Dog";
	return o;
}
