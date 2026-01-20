/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 16:25:06 by jpiquet           #+#    #+#             */
/*   Updated: 2026/01/20 14:22:41 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

/*Default constructor*/
Cat::Cat( void )
{
	this->_type = "Cat"; 
	std::cout << "Default " << this->_type<< " constructor called" << std::endl;
}

/*Copy constructor*/
Cat::Cat( Cat const & src ) : Animal(src)
{
	std::cout << "Default " << this->_type << " copy constructor called" << std::endl;
}

/*Assignation operator overload*/
Cat & Cat::operator=( Cat const & rightSide )
{
	std::cout << "Cat assignation operator overload" << std::endl;
	if (this != &rightSide)
	{
		Animal::operator=(rightSide);
	}
	return *this;
}

/*Default destructor*/
Cat::~Cat( void )
{
	std::cout << "Default Cat destructor called" << std::endl;
}

void	Cat::makeSound( void ) const
{
	std::cout << "The " << this->_type << " make a cute : meow...moew" << std::endl;
}
