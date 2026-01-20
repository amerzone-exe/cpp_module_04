/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 13:32:47 by jpiquet           #+#    #+#             */
/*   Updated: 2026/01/20 13:40:30 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

/*Default constructor*/
WrongAnimal::WrongAnimal( void ) : _type("WrongAnimal")
{
	std::cout << "Default WrongAnimal constructor called" << std::endl;
}

/*Copy constructor*/
WrongAnimal::WrongAnimal( WrongAnimal const & src ) : _type(src._type)
{
	std::cout << "Default WrongAnimal copy constructor called" << std::endl;
}

/*Assignation operator overload*/
WrongAnimal & WrongAnimal::operator=( WrongAnimal const & rhs )
{
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	return *this;
}

/*Default destructor*/
WrongAnimal::~WrongAnimal( void )
{
	std::cout << "Default WrongAnimal destructor called" << std::endl;
}

void		WrongAnimal::makeSound( void ) const
{
	std::cout << "The " << this->_type << " doesn't even make an animal sound... Scary !" << std::endl;
}

/*Getter & setter*/
std::string	WrongAnimal::getType( void ) const
{
	return this->_type;
}

void	WrongAnimal::setType( std::string const & newtype )
{
	this->_type = newtype;
}