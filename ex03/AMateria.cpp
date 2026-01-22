/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 17:09:30 by jpiquet           #+#    #+#             */
/*   Updated: 2026/01/22 16:44:20 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

/*Default constructor*/
AMateria::AMateria( void )
{
	std::cout << "Default constructor called" << std::endl;
}

/*Default constructor*/
AMateria::AMateria( std::string const & type ) : _type(type)
{
	std::cout << "Default constructor called" << std::endl;
}

/*Copy constructor*/
AMateria::AMateria( AMateria const & src ) : _type(src._type)
{
	std::cout << "Copy constructor called" << std::endl;
}

/*Assignation operator overload*/
AMateria & AMateria::operator=( AMateria const & rightSide )
{
	if (this != &rightSide)
	{
		this->_type = rightSide._type;
	}
	return *this;
}

/*Default destructor*/
AMateria::~AMateria( void )
{
	std::cout << "Default destructor called" << std::endl;
}

std::string const & AMateria::getType( void ) const
{
	return this->_type;
}

void		AMateria::use( ICharacter & target )
{
	std::cout << "* Do nothing on " << target.getName() << std::endl;
}
