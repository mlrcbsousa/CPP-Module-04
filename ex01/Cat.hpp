/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:19:10 by msousa            #+#    #+#             */
/*   Updated: 2022/04/08 20:27:40 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_H__
# define __CAT_H__

# include <iostream>

# include "Animal.hpp"
# include "Brain.hpp"

// ************************************************************************** //
//                               Cat Class                             		  //
// ************************************************************************** //

class Cat : public Animal {

public:

	Cat( void );
	Cat( Cat const & src );
	~Cat( void );
	Cat & operator = ( Cat const & rhs );

	virtual void	makeSound( void ) const;

private:

	Brain *	brain;

};

std::ostream &  operator << ( std::ostream & o, Cat const & p);

#endif /* __CAT_H__ */
