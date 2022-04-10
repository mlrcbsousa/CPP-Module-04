/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:31:21 by msousa            #+#    #+#             */
/*   Updated: 2022/04/10 18:14:50 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CURE_H__
# define __CURE_H__

# include <iostream>

# include "AMateria.hpp"

// ************************************************************************** //
//                               Cure Class                             	  //
// ************************************************************************** //

class Cure : public AMateria {

public:

	Cure( void );
	Cure( Cure const & src );
	virtual ~Cure( void );
	virtual Cure & operator = ( Cure const & rhs );

	virtual AMateria* clone( void ) const;
	virtual void use( ICharacter & target );

};

#endif /* __CURE_H__ */
