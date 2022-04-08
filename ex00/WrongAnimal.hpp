/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:28:00 by msousa            #+#    #+#             */
/*   Updated: 2022/04/08 18:28:08 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONG_ANIMAL_H__
# define __WRONG_ANIMAL_H__

# include <iostream>

// ************************************************************************** //
//                               WrongAnimal Class                             //
// ************************************************************************** //

class WrongAnimal {

public:

	WrongAnimal( void );
	WrongAnimal( WrongAnimal const & src );
	~WrongAnimal( void );
	WrongAnimal & operator = ( WrongAnimal const & rhs );

private:



};

std::ostream &  operator << ( std::ostream & o, WrongAnimal const & p);

#endif /* __WRONG_ANIMAL_H__ */
