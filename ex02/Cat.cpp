/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 16:25:06 by jpiquet           #+#    #+#             */
/*   Updated: 2026/01/20 20:57:20 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

/*Default constructor*/
Cat::Cat( void ) : AAnimal()
{
	this->_type = "Cat";
	this->_brain = new Brain();
	std::cout << "Default " << this->_type<< " constructor called" << std::endl;
}

Cat::Cat( std::string ideas ) : AAnimal()
{
	this->_type = "Cat";
	this->_brain = new Brain(ideas);
	std::cout << "Initialization Cat constructor called" << std::endl;
}

/*Copy constructor*/
Cat::Cat( Cat const & src ) : AAnimal(src)
{
	this->_brain = new Brain();
	*_brain = *src._brain;
	std::cout << "Default " << this->_type << " copy constructor called" << std::endl;
}

/*Assignation operator overload*/
Cat & Cat::operator=( Cat const & rightSide )
{
	if (this->_brain != NULL)
		delete this->_brain;
	if (this != &rightSide)
	{
		AAnimal::operator=(rightSide);
		this->_brain = new Brain();
		*_brain = *rightSide._brain;
	}
	std::cout << "Cat assignation operator overload" << std::endl;
	return *this;
}

/*Default destructor*/
Cat::~Cat( void )
{
	delete this->_brain;
	std::cout << "Default Cat destructor called" << std::endl;
}

void	Cat::makeSound( void ) const
{
	std::cout << "The " << this->_type << " make a cute : meow...moew" << std::endl;
}

// void	Cat::printTought( unsigned int i) const
// {
// 	if (i > 100)
// 	{
// 		std::cout << "A Cat isn't that smart" << std::endl;
// 	}
// 	std::cout << this->_brain.getIdeas(i) << std::endl;
// }
