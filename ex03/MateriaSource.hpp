/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:32:40 by msousa            #+#    #+#             */
/*   Updated: 2022/04/08 18:32:47 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MATERIA_SOURCE_H__
# define __MATERIA_SOURCE_H__

# include <iostream>

// ************************************************************************** //
//                               MateriaSource Class                             //
// ************************************************************************** //

class MateriaSource {

public:

	MateriaSource( void );
	MateriaSource( MateriaSource const & src );
	~MateriaSource( void );
	MateriaSource & operator = ( MateriaSource const & rhs );

private:



};

std::ostream &  operator << ( std::ostream & o, MateriaSource const & p);

#endif /* __MATERIA_SOURCE_H__ */
