/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:26:50 by msousa            #+#    #+#             */
/*   Updated: 2022/04/08 18:27:00 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __A_ANIMAL_H__
# define __A_ANIMAL_H__

# include <iostream>

// ************************************************************************** //
//                               AAnimal Class                             //
// ************************************************************************** //

class AAnimal {

public:

	AAnimal( void );
	AAnimal( AAnimal const & src );
	~AAnimal( void );
	AAnimal & operator = ( AAnimal const & rhs );

private:



};

std::ostream &  operator << ( std::ostream & o, AAnimal const & p);

#endif /* __A_ANIMAL_H__ */
