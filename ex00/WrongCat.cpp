/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:28:12 by msousa            #+#    #+#             */
/*   Updated: 2022/04/08 20:52:12 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/* Constructors */
WrongCat::WrongCat( void ) : WrongAnimal("Cat")
{
	LOG("WrongCat Default constructor called");
}

WrongCat::WrongCat( WrongCat const & src )
{
	LOG("WrongCat Copy constructor called");
	*this = src;
}

/* Destructor */
WrongCat::~WrongCat( void ) { LOG("WrongCat destructor called"); }

/* Assignment operator */
WrongCat &  WrongCat::operator = ( WrongCat const & rhs )
{
	LOG("WrongCat Assignment operator called");
	if (this != &rhs) {
		type = rhs.type;
	}
	return *this;
}

void	WrongCat::makeSound( void ) const { LOG("Meow"); }

/* ostream override */
std::ostream &  operator << ( std::ostream & o, WrongCat const & i)
{
	(void)i;
	o << "WrongCat";
	return o;
}
