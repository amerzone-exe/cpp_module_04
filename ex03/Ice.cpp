/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 18:04:14 by jpiquet           #+#    #+#             */
/*   Updated: 2026/01/23 14:48:25 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include <iostream>

/*Default constructor*/
Ice::Ice( void ) : AMateria("ice")
{
	std::cout << "Default Ice constructor called" << std::endl;
}

/*Copy constructor*/
Ice::Ice( Ice const & src ) : AMateria(src)
{
	std::cout << "Copy constructor called" << std::endl;
}

/*Assignation operator overload*/
Ice & Ice::operator=( Ice const & rightSide )
{
	if (this != &rightSide)
	{
		AMateria::operator=(rightSide);
	}
	return *this;
}

/*Default destructor*/
Ice::~Ice( void )
{
	std::cout << "Default destructor called" << std::endl;
}

AMateria*	Ice::clone( void ) const
{
	AMateria *clone = new Ice();
	return clone;
}

void		Ice::use( ICharacter & target )
{
	std::cout << " * shoots an ice bolt at " << target.getName() << std::endl;
}
