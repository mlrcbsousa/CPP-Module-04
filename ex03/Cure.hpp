/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:31:21 by msousa            #+#    #+#             */
/*   Updated: 2022/04/08 18:31:26 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CURE_H__
# define __CURE_H__

# include <iostream>

// ************************************************************************** //
//                               Cure Class                             //
// ************************************************************************** //

class Cure {

public:

	Cure( void );
	Cure( Cure const & src );
	~Cure( void );
	Cure & operator = ( Cure const & rhs );

private:



};

std::ostream &  operator << ( std::ostream & o, Cure const & p);

#endif /* __CURE_H__ */
