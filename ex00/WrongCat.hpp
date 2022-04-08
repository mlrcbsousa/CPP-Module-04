/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:28:24 by msousa            #+#    #+#             */
/*   Updated: 2022/04/08 18:28:33 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONG_CAT_H__
# define __WRONG_CAT_H__

# include <iostream>

// ************************************************************************** //
//                               WrongCat Class                             //
// ************************************************************************** //

class WrongCat {

public:

	WrongCat( void );
	WrongCat( WrongCat const & src );
	~WrongCat( void );
	WrongCat & operator = ( WrongCat const & rhs );

private:



};

std::ostream &  operator << ( std::ostream & o, WrongCat const & p);

#endif /* __WRONG_CAT_H__ */
