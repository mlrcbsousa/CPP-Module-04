/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:19:10 by msousa            #+#    #+#             */
/*   Updated: 2022/04/09 18:04:03 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_H__
# define __CAT_H__

# include <iostream>

# include "AAnimal.hpp"
# include "Brain.hpp"

// ************************************************************************** //
//                               Cat Class                             		  //
// ************************************************************************** //

class Cat : public AAnimal {

public:

	Cat( void );
	Cat( Cat const & src );
	~Cat( void );
	Cat & operator = ( Cat const & rhs );

	virtual void	makeSound( void ) const;

	void		setIdea( size_t i, std::string & idea );
	std::string	getIdea( size_t i ) const;

private:

	Brain *	brain;

};

std::ostream &  operator << ( std::ostream & o, Cat const & p);

#endif /* __CAT_H__ */
