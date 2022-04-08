/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:18:11 by msousa            #+#    #+#             */
/*   Updated: 2022/04/08 18:18:46 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_H__
# define __ANIMAL_H__

# include <iostream>

// ************************************************************************** //
//                               Animal Class                             //
// ************************************************************************** //

class Animal {

public:

	Animal( void );
	Animal( Animal const & src );
	~Animal( void );
	Animal & operator = ( Animal const & rhs );

private:



};

std::ostream &  operator << ( std::ostream & o, Animal const & p);

#endif /* __ANIMAL_H__ */
