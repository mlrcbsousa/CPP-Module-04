/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:30:29 by msousa            #+#    #+#             */
/*   Updated: 2022/04/10 18:15:06 by msousa           ###   ########.fr       */
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

	AMateria( std::string const & type );
	AMateria( AMateria const & src );
	virtual ~AMateria( void );
	virtual AMateria & operator = ( AMateria const & rhs );

	std::string const & getType( void ) const;

	virtual AMateria* clone( void ) const = 0;
	virtual void use( ICharacter & target );

protected:

	std::string	type;

private:

	AMateria( void );

};

#endif /* __A_MATERIA_H__ */
