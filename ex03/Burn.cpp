/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Burn.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 18:04:16 by jpiquet           #+#    #+#             */
/*   Updated: 2026/01/23 14:48:39 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Burn.hpp"
#include <iostream>

/*Default constructor*/
Burn::Burn( void ) : AMateria("burn")
{
	std::cout << "Default Burn constructor called" << std::endl;
}

/*Copy constructor*/
Burn::Burn( Burn const & src ) : AMateria(src)
{
	std::cout << "Copy constructor called" << std::endl;
}

/*Assignation operator overload*/
Burn & Burn::operator=( Burn const & rightSide )
{
	if (this != &rightSide)
	{
		AMateria::operator=(rightSide);
	}
	return *this;
}

/*Default destructor*/
Burn::~Burn( void )
{
	std::cout << "Default destructor called" << std::endl;
}

AMateria*	Burn::clone( void ) const
{
	AMateria *clone = new Burn();
	return clone;
}

void		Burn::use( ICharacter & target )
{
	std::cout << "* burn " << target.getName() << "'s body *" << std::endl;
}
