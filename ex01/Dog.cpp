/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:19:43 by msousa            #+#    #+#             */
/*   Updated: 2022/04/08 20:57:45 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/* Constructors */
Dog::Dog( void ) : Animal("Dog"), brain(new Brain())
{
	LOG("Dog Default constructor called");
}

Dog::Dog( Dog const & src )
{
	LOG("Dog Copy constructor called");
	*this = src;
}

/* Destructor */
Dog::~Dog( void )
{
	LOG("Dog destructor called");
	delete brain;
}

/* Assignment operator */
Dog &  Dog::operator = ( Dog const & rhs )
{
	LOG("Dog Assignment operator called");
	if (this != &rhs) {
		type = rhs.type;
		brain = new Brain(*rhs.brain);
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
