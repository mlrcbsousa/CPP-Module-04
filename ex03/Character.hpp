/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:31:01 by msousa            #+#    #+#             */
/*   Updated: 2022/04/08 18:31:08 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CHARACTER_H__
# define __CHARACTER_H__

# include <iostream>

// ************************************************************************** //
//                               Character Class                             //
// ************************************************************************** //

class Character {

public:

	Character( void );
	Character( Character const & src );
	~Character( void );
	Character & operator = ( Character const & rhs );

private:



};

std::ostream &  operator << ( std::ostream & o, Character const & p);

#endif /* __CHARACTER_H__ */
