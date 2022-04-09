/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msousa <mlrcbsousa@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:20:00 by msousa            #+#    #+#             */
/*   Updated: 2022/04/09 18:39:51 by msousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int	main( void )
{
	const size_t	count = 3;
	AAnimal*		animals[count];

	for (size_t i = 0; i < count; i++) {
		if (i % 2) 	{ animals[i] = new Dog(); }
		else 		{ animals[i] = new Cat(); }
	}
	for (size_t i = 0; i < count; i++)
		delete animals[i];

	LOG("=========================================");

	Cat	a;
	std::string	hello("Hello World!");
	std::string	idea("Foood!");

	a.setIdea(0, hello);

	Cat b(a);

	LOG(b.getIdea(0)); // should be "Hello World!"
	a.setIdea(0, idea);
	LOG(a.getIdea(0)); // should be "Foood!"
	LOG(b.getIdea(0)); // should be "Hello World!"

	LOG("=========================================");

	// AAnimal animal; //Shouldn't be possible;

	LOG("=========================================");

	return 0;
}
