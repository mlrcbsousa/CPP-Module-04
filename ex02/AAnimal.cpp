/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:17:50 by msousa            #+#    #+#             */
/*   Updated: 2022/04/09 18:03:32 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

/* Constructors */
AAnimal::AAnimal( void ) { LOG("AAnimal Default constructor called"); }

AAnimal::AAnimal( std::string type ) : type(type)
{
	LOG("AAnimal String constructor called");
}

AAnimal::AAnimal( AAnimal const & src )
{
	LOG("AAnimal Copy constructor called");
	*this = src;
}

/* Destructor */
AAnimal::~AAnimal( void ) { LOG("AAnimal destructor called"); }

/* Assignment operator */
AAnimal &  AAnimal::operator = ( AAnimal const & rhs )
{
	LOG("AAnimal Assignment operator called");
	if (this != &rhs) {
		type = rhs.type;
	}
	return *this;
}

std::string	AAnimal::getType( void ) const { return type; }
void	AAnimal::makeSound( void ) const { LOG("meta"); }

/* ostream override */
std::ostream &  operator << ( std::ostream & o, AAnimal const & i)
{
	(void)i;
	o << "AAnimal";
	return o;
}
