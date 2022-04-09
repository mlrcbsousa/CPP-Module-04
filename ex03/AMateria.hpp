/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:30:29 by msousa            #+#    #+#             */
/*   Updated: 2022/04/09 20:53:06 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __A_MATERIA_H__
# define __A_MATERIA_H__

# include <iostream>

# include "ICharacter.hpp"

# define LOG(x) std::cout << x << std::endl

class ICharacter;

// ************************************************************************** //
//                       	Materia Abstract Class                            //
// ************************************************************************** //

class AMateria {

public:

	AMateria( void );
	AMateria( std::string const & type );
	AMateria( AMateria const & src );
	virtual ~AMateria( void );
	virtual AMateria & operator = ( AMateria const & rhs );

	std::string const & getType( void ) const; // Returns the materia type

	virtual AMateria* clone( void ) const = 0;
	virtual void use( ICharacter & target );

protected:

	std::string	type;

};

std::ostream &  operator << ( std::ostream & o, AMateria const & i );

#endif /* __A_MATERIA_H__ */
