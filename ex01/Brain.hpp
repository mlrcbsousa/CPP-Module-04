/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:25:10 by msousa            #+#    #+#             */
/*   Updated: 2022/04/08 18:25:15 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BRAIN_H__
# define __BRAIN_H__

# include <iostream>

// ************************************************************************** //
//                               Brain Class                             //
// ************************************************************************** //

class Brain {

public:

	Brain( void );
	Brain( Brain const & src );
	~Brain( void );
	Brain & operator = ( Brain const & rhs );

private:



};

std::ostream &  operator << ( std::ostream & o, Brain const & p);

#endif /* __BRAIN_H__ */
