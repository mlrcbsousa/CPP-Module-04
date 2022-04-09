/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:18:54 by msousa            #+#    #+#             */
/*   Updated: 2022/04/09 18:04:13 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/* Constructors */
Cat::Cat( void ) : AAnimal("Cat"), brain(new Brain())
{
	LOG("Cat Default constructor called");
}

Cat::Cat( Cat const & src )
{
	LOG("Cat Copy constructor called");
	*this = src;
}

/* Destructor */
Cat::~Cat( void )
{
	LOG("Cat destructor called");
	delete brain;
}

/* Assignment operator */
Cat &  Cat::operator = ( Cat const & rhs )
{
	LOG("Cat Assignment operator called");
	if (this != &rhs) {
		type = rhs.type;
		brain = new Brain(*rhs.brain);
	}
	return *this;
}

void	Cat::makeSound( void ) const { LOG("Meow"); }

void	Cat::setIdea( size_t i, std::string & idea ) { brain->setIdea(i, idea); }
std::string	Cat::getIdea( size_t i ) const { return brain->getIdea(i); }

/* ostream override */
std::ostream &  operator << ( std::ostream & o, Cat const & i)
{
	(void)i;
	o << "Cat";
	return o;
}
