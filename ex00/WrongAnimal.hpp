/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:28:00 by msousa            #+#    #+#             */
/*   Updated: 2022/04/08 19:57:09 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONG_ANIMAL_H__
# define __WRONG_ANIMAL_H__

# include <iostream>

# define LOG(x) std::cout << x << std::endl

// ************************************************************************** //
//                               WrongAnimal Class                            //
// ************************************************************************** //

class WrongAnimal {

public:

	WrongAnimal( void );
	WrongAnimal( WrongAnimal const & src );
	virtual ~WrongAnimal( void );
	virtual WrongAnimal &	operator = ( WrongAnimal const & rhs );

	std::string		getType( void ) const;

	void	makeSound( void ) const;

protected:

	WrongAnimal( std::string type );

	std::string type;

};

std::ostream &  operator << ( std::ostream & o, WrongAnimal const & p);

#endif /* __WRONG_ANIMAL_H__ */
