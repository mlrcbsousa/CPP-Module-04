/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:19:43 by msousa            #+#    #+#             */
/*   Updated: 2022/04/09 18:04:20 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/* Constructors */
Dog::Dog( void ) : AAnimal("Dog"), brain(new Brain())
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

void	Dog::setIdea( size_t i, std::string & idea ) { brain->setIdea(i, idea); }
std::string	Dog::getIdea( size_t i ) const { return brain->getIdea(i); }

/* ostream override */
std::ostream &  operator << ( std::ostream & o, Dog const & i)
{
	(void)i;
	o << "Dog";
	return o;
}
