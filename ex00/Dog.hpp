/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:19:51 by msousa            #+#    #+#             */
/*   Updated: 2022/04/08 19:34:28 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_H__
# define __DOG_H__

# include <iostream>

# include "Animal.hpp"

// ************************************************************************** //
//                               Dog Class                             		  //
// ************************************************************************** //

class Dog : public Animal {

public:

	Dog( void );
	Dog( Dog const & src );
	~Dog( void );
	Dog & operator = ( Dog const & rhs );

	virtual void	makeSound( void ) const;

};

std::ostream &  operator << ( std::ostream & o, Dog const & p);

#endif /* __DOG_H__ */
