/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:19:51 by msousa            #+#    #+#             */
/*   Updated: 2022/04/10 17:36:24 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_H__
# define __DOG_H__

# include <iostream>

# include "Animal.hpp"
# include "Brain.hpp"

// ************************************************************************** //
//                               Dog Class                             		  //
// ************************************************************************** //

class Dog : public Animal {

public:

	Dog( void );
	Dog( Dog const & src );
	virtual ~Dog( void );
	Dog & operator = ( Dog const & rhs );

	virtual void	makeSound( void ) const;

	void		setIdea( size_t i, std::string & idea );
	std::string	getIdea( size_t i ) const;

private:

	Brain *	brain;

};

std::ostream &  operator << ( std::ostream & o, Dog const & p);

#endif /* __DOG_H__ */
