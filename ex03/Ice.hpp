/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:31:48 by msousa            #+#    #+#             */
/*   Updated: 2022/04/10 18:14:34 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ICE_H__
# define __ICE_H__

# include <iostream>

# include "AMateria.hpp"

// ************************************************************************** //
//                               Ice Class                             		  //
// ************************************************************************** //

class Ice : public AMateria {

public:

	Ice( void );
	Ice( Ice const & src );
	virtual ~Ice( void );
	virtual Ice & operator = ( Ice const & rhs );

	virtual AMateria* clone( void ) const;
	virtual void use( ICharacter & target );

};

#endif /* __ICE_H__ */
