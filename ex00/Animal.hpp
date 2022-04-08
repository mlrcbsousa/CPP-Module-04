/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:18:11 by msousa            #+#    #+#             */
/*   Updated: 2022/04/08 19:55:35 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_H__
# define __ANIMAL_H__

# include <iostream>

# define LOG(x) std::cout << x << std::endl

// ************************************************************************** //
//                               Animal Class                             	  //
// ************************************************************************** //

class Animal {

public:

	Animal( void );
	Animal( Animal const & src );
	virtual ~Animal( void );
	virtual Animal &	operator = ( Animal const & rhs );

	std::string		getType( void ) const;

	virtual void	makeSound( void ) const;

protected:

	Animal( std::string type );

	std::string type;

};

std::ostream &  operator << ( std::ostream & o, Animal const & p);

#endif /* __ANIMAL_H__ */
