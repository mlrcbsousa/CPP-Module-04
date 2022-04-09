/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 19:18:27 by msousa            #+#    #+#             */
/*   Updated: 2022/04/09 19:42:33 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __I_CHARACTER_H__
# define __I_CHARACTER_H__

# include <iostream>

# include "AMateria.hpp"

class AMateria;

// ************************************************************************** //
//                               Character Interface                          //
// ************************************************************************** //

class ICharacter {

public:

	virtual ~ICharacter() {}
	virtual std::string const &	getName( void ) const = 0;
	virtual void 				equip( AMateria* m ) = 0;
	virtual void 				unequip( int idx ) = 0;
	virtual void 				use( int idx, ICharacter & target ) = 0;

};

#endif /* __I_CHARACTER_H__ */
