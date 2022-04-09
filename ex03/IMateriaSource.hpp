/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 19:41:27 by msousa            #+#    #+#             */
/*   Updated: 2022/04/09 20:59:39 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __I_MATERIA_SOURCE_H__
# define __I_MATERIA_SOURCE_H__

# include <iostream>

# include "AMateria.hpp"

// ************************************************************************** //
//                          MateriaSource Interface                      	  //
// ************************************************************************** //

class IMateriaSource {

public:

    virtual ~IMateriaSource( void ) {}
	virtual void learnMateria( AMateria* ) = 0;
	virtual AMateria* createMateria( std::string const & type ) = 0;

};

#endif /* __I_MATERIA_SOURCE_H__ */
