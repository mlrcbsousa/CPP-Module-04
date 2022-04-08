/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:30:29 by msousa            #+#    #+#             */
/*   Updated: 2022/04/08 18:30:37 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __A_MATERIA_H__
# define __A_MATERIA_H__

# include <iostream>

// ************************************************************************** //
//                               AMateria Class                             //
// ************************************************************************** //

class AMateria {

public:

	AMateria( void );
	AMateria( AMateria const & src );
	~AMateria( void );
	AMateria & operator = ( AMateria const & rhs );

private:



};

std::ostream &  operator << ( std::ostream & o, AMateria const & p);

#endif /* __A_MATERIA_H__ */
