/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:27:51 by msousa            #+#    #+#             */
/*   Updated: 2022/04/08 20:51:42 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/* Constructors */
WrongAnimal::WrongAnimal( void ) { LOG("WrongAnimal Default constructor called"); }

WrongAnimal::WrongAnimal( std::string type ) : type(type)
{
	LOG("WrongAnimal String constructor called");
}

WrongAnimal::WrongAnimal( WrongAnimal const & src )
{
	LOG("WrongAnimal Copy constructor called");
	*this = src;
}

/* Destructor */
WrongAnimal::~WrongAnimal( void ) { LOG("WrongAnimal destructor called"); }

/* Assignment operator */
WrongAnimal &  WrongAnimal::operator = ( WrongAnimal const & rhs )
{
	LOG("WrongAnimal Assignment operator called");
	if (this != &rhs) {
		type = rhs.type;
	}
	return *this;
}

std::string	WrongAnimal::getType( void ) const { return type; }
void	WrongAnimal::makeSound( void ) const { LOG("wrong sound"); }

/* ostream override */
std::ostream &  operator << ( std::ostream & o, WrongAnimal const & i)
{
	(void)i;
	o << "WrongAnimal";
	return o;
}
