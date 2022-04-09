/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 19:41:27 by msousa            #+#    #+#             */
/*   Updated: 2022/04/09 19:42:26 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __I_MATERIA_SOURCE_H__
# define __I_MATERIA_SOURCE_H__

# include <iostream>

// ************************************************************************** //
//                               MateriaSource Interface                      //
// ************************************************************************** //

class IMateriaSource {

public:

	IMateriaSource( void );
	IMateriaSource( IMateriaSource const & src );
	~IMateriaSource( void );
	IMateriaSource &	operator = ( IMateriaSource const & rhs );

private:



};

std::ostream &	operator << ( std::ostream & o, IMateriaSource const & i );

#endif /* __I_MATERIA_SOURCE_H__ */
