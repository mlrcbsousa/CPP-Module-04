/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:25:10 by msousa            #+#    #+#             */
/*   Updated: 2022/04/09 18:01:01 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BRAIN_H__
# define __BRAIN_H__

# include <iostream>

# define LOG(x) std::cout << x << std::endl

// ************************************************************************** //
//                               Brain Class                             //
// ************************************************************************** //

class Brain {

public:

	Brain( void );
	Brain( Brain const & src );
	~Brain( void );
	Brain & operator = ( Brain const & rhs );

	void		setIdea( size_t i, std::string & idea );
	std::string	getIdea( size_t i ) const;

private:

	std::string	ideas[100];

};

std::ostream &  operator << ( std::ostream & o, Brain const & p);

#endif /* __BRAIN_H__ */
