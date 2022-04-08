/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:18:54 by msousa            #+#    #+#             */
/*   Updated: 2022/04/08 20:01:26 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/* Constructors */
Cat::Cat( void ) : Animal("Cat") { LOG("Cat Default constructor called"); }
Cat::Cat( Cat const & src ) { *this = src; }

/* Destructor */
Cat::~Cat( void ) { LOG("Cat destructor called"); }

/* Assignment operator */
Cat &  Cat::operator = ( Cat const & rhs )
{
	if (this != &rhs) {
		type = rhs.type;
	}
	return *this;
}

void	Cat::makeSound( void ) const { LOG("Meow"); }

/* ostream override */
std::ostream &  operator << ( std::ostream & o, Cat const & i)
{
	(void)i;
	o << "Cat";
	return o;
}
