/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 18:04:16 by jpiquet           #+#    #+#             */
/*   Updated: 2026/01/21 20:32:00 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>

/*Default constructor*/
Cure::Cure( void ) : AMateria("cure")
{
	std::cout << "Default constructor called" << std::endl;
}

/*Copy constructor*/
Cure::Cure( Cure const & src ) : AMateria(src)
{
	std::cout << "Copy constructor called" << std::endl;
}

/*Assignation operator overload*/
Cure & Cure::operator=( Cure const & rightSide )
{
	if (this != &rightSide)
	return *this;
}

/*Default destructor*/
Cure::~Cure( void )
{
	std::cout << "Default destructor called" << std::endl;
}

AMateria*	Cure::clone( void ) const
{
	AMateria *clone = new Cure();
	return clone;
}

void		Cure::use( ICharacter & target )
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
