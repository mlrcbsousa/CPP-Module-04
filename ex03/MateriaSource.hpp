/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:32:40 by msousa            #+#    #+#             */
/*   Updated: 2022/04/10 18:58:22 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MATERIA_SOURCE_H__
# define __MATERIA_SOURCE_H__

# include <iostream>

# include "IMateriaSource.hpp"

# define SOURCE_SIZE 4

// ************************************************************************** //
//                               MateriaSource Class                          //
// ************************************************************************** //

class MateriaSource : public IMateriaSource {

public:

	MateriaSource( void );
	MateriaSource( MateriaSource const & src );
	virtual ~MateriaSource( void );
	MateriaSource &	operator = ( MateriaSource const & rhs );

	virtual void learnMateria( AMateria* m );
	virtual AMateria* createMateria( std::string const & type );

private:

	AMateria*	source[SOURCE_SIZE];

};

#endif /* __MATERIA_SOURCE_H__ */
