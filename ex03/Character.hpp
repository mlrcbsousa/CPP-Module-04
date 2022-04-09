/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:31:01 by msousa            #+#    #+#             */
/*   Updated: 2022/04/09 20:42:00 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CHARACTER_H__
# define __CHARACTER_H__

# include <iostream>

# include "ICharacter.hpp"

# define INVENTORY_SIZE 4

// ************************************************************************** //
//                               Character Class                              //
// ************************************************************************** //

class Character : public ICharacter {

public:

	Character( void );
	Character( std::string const & name );
	Character( Character const & src );
	virtual ~Character( void );
	Character & operator = ( Character const & rhs );

	virtual std::string const &	getName( void ) const;
	virtual void 				equip( AMateria* m );
	virtual void 				unequip( int idx );
	virtual void 				use( int idx, ICharacter & target );

private:

	std::string	name;
	AMateria*	inventory[INVENTORY_SIZE];

};

std::ostream &  operator << ( std::ostream & o, Character const & i );

#endif /* __CHARACTER_H__ */
