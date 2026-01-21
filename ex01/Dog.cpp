/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 18:56:39 by jpiquet           #+#    #+#             */
/*   Updated: 2026/01/21 14:55:26 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

/*Default constructor*/
Dog::Dog( void ) : Animal()
{
	this->_type = "Dog";
	this->_brain = new Brain();
	std::cout << "Default Dog constructor called" << std::endl;
}

/*Default constructor*/
Dog::Dog( std::string ideas ) : Animal()
{
	this->_type = "Dog";
	this->_brain = new Brain(ideas);
	std::cout << "Initialization Dog constructor called" << std::endl;
}

/*Deep copy constructor*/
Dog::Dog( Dog const & src ) : Animal(src)
{
	this->_brain = new Brain();
	*_brain = *src._brain;
	std::cout << "Default " << this->_type << " deep copy constructor called" << std::endl;
}

/*Assignation operator overload*/
Dog & Dog::operator=( Dog const & rightSide )
{
	if (this != &rightSide)
	{
		if (this->_brain != NULL)
			delete this->_brain;
		Animal::operator=(rightSide);
		this->_brain = new Brain();
		*_brain = *rightSide._brain;
	}
	std::cout << "Dog assignation operator overload" << std::endl;
	return *this;
}

/*Default destructor*/
Dog::~Dog( void )
{
	delete this->_brain;
	std::cout << "Default Dog destructor called" << std::endl;
}

void	Dog::makeSound( void ) const
{
	std::cout << "The " << this->_type << " makes a loud : Bark! Bark!!!" << std::endl;
}

void	Dog::printTought( unsigned int i) const
{
	if (i > 100)
	{
		std::cout << "A Dog isn't that smart" << std::endl;
	}
	std::cout << this->_brain->getIdea(i) << std::endl;
}
