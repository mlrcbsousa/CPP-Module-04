/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:19:10 by msousa            #+#    #+#             */
/*   Updated: 2022/04/10 17:35:51 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_H__
# define __CAT_H__

# include <iostream>

# include "Animal.hpp"

// ************************************************************************** //
//                               Cat Class                             		  //
// ************************************************************************** //

class Cat : public Animal {

public:

	Cat( void );
	Cat( Cat const & src );
	virtual ~Cat( void );
	Cat & operator = ( Cat const & rhs );

	virtual void	makeSound( void ) const;

};

std::ostream &  operator << ( std::ostream & o, Cat const & p);

#endif /* __CAT_H__ */
