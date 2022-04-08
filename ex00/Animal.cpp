/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:17:50 by msousa            #+#    #+#             */
/*   Updated: 2022/04/08 20:01:05 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/* Constructors */
Animal::Animal( void ) { LOG("Animal Default constructor called"); }

Animal::Animal( std::string type ) : type(type)
{
	LOG("Animal String constructor called");
}

Animal::Animal( Animal const & src ) { *this = src; }

/* Destructor */
Animal::~Animal( void ) { LOG("Animal destructor called"); }

/* Assignment operator */
Animal &  Animal::operator = ( Animal const & rhs )
{
	if (this != &rhs) {
		type = rhs.type;
	}
	return *this;
}

std::string	Animal::getType( void ) const { return type; }
void	Animal::makeSound( void ) const { LOG("meta"); }

/* ostream override */
std::ostream &  operator << ( std::ostream & o, Animal const & i)
{
	(void)i;
	o << "Animal";
	return o;
}
