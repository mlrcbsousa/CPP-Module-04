/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:28:12 by msousa            #+#    #+#             */
/*   Updated: 2022/04/08 18:28:15 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/* Constructors */
WrongCat::WrongCat( void ) { /* no-op */}
WrongCat::WrongCat( WrongCat const & src ) { *this = src; }

/* Destructor */
WrongCat::~WrongCat( void ) { /* no-op */}

/* Assignment operator */
WrongCat &  WrongCat::operator = ( WrongCat const & rhs )
{
	if (this != &rhs) {
		*this = rhs;
	}
	return *this;
}

/* ostream override */
std::ostream &  operator << ( std::ostream & o, WrongCat const & i)
{
	(void)i;
	o << "WrongCat";
	return o;
}
