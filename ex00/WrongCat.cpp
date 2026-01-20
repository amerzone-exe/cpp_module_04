/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 13:32:52 by jpiquet           #+#    #+#             */
/*   Updated: 2026/01/20 13:39:03 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

/*Default constructor*/
WrongCat::WrongCat( void )
{
	this->_type = "WrongCat"; 
	std::cout << "Default " << this->_type<< " constructor called" << std::endl;
}

/*Copy constructor*/
WrongCat::WrongCat( WrongCat const & src ) : WrongAnimal(src)
{
	std::cout << "Default " << this->_type << " copy constructor called" << std::endl;
}

/*Assignation operator overload*/
WrongCat & WrongCat::operator=( WrongCat const & rightSide )
{
	if (this != &rightSide)
	{
		WrongAnimal::operator=(rightSide);
	}
	return *this;
}

/*Default destructor*/
WrongCat::~WrongCat( void )
{
	std::cout << "Default WrongCat destructor called" << std::endl;
}

void	WrongCat::makeSound( void ) const
{
	std::cout << "The " << this->_type << " make an awful : blurp..blurp" << std::endl;
}
