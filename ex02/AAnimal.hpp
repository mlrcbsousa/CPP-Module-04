/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:18:11 by msousa            #+#    #+#             */
/*   Updated: 2022/04/09 18:38:44 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __A_ANIMAL_H__
# define __A_ANIMAL_H__

# include <iostream>

# define LOG(x) std::cout << x << std::endl

// ************************************************************************** //
//                               AAnimal Class                             	  //
// ************************************************************************** //

class AAnimal {

public:

	AAnimal( void );
	AAnimal( AAnimal const & src );
	virtual ~AAnimal( void );
	virtual AAnimal &	operator = ( AAnimal const & rhs );

	std::string		getType( void ) const;

	virtual void	makeSound( void ) const = 0;

protected:

	AAnimal( std::string type );

	std::string type;

};

std::ostream &  operator << ( std::ostream & o, AAnimal const & p);

#endif /* __A_ANIMAL_H__ */
