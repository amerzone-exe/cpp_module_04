/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 15:45:40 by jpiquet           #+#    #+#             */
/*   Updated: 2026/01/23 16:49:28 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"
#include <iostream>

/*Default constructor*/
MateriaSource::MateriaSource( void )
{
	this->_materia = new AMateria*[4];
	this->_materia[0] = NULL;
	this->_materia[1] = NULL;
	this->_materia[2] = NULL;
	this->_materia[3] = NULL;
	std::cout << "Default MateriaSource constructor called" << std::endl;
}

/*Copy constructor*/
MateriaSource::MateriaSource( MateriaSource const & src )
{
	*this = src;
	std::cout << "Copy constructor called" << std::endl;
}

/*Assignation operator overload*/
MateriaSource & MateriaSource::operator=( MateriaSource const & rightSide )
{
	if (this != &rightSide)
	{
		this->deleteMateria();
		this->_materia = new AMateria*[4];
		this->_materia[0] = rightSide._materia[0]->clone();
		this->_materia[1] = rightSide._materia[1]->clone();
		this->_materia[2] = rightSide._materia[2]->clone();
		this->_materia[3] = rightSide._materia[3]->clone();
	}
	return *this;
}

/*Default destructor*/
MateriaSource::~MateriaSource( void )
{
	this->deleteMateria();
	std::cout << "Default destructor called" << std::endl;
}

int			MateriaSource::isFull( void ) const
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materia[i] == NULL)
			return i;
	}
	return -1;
}

void	MateriaSource::deleteMateria( void )
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materia[i] != NULL)
			delete this->_materia[i];
	}
	delete [] this->_materia;
}

void		MateriaSource::learnMateria(AMateria* m)
{
	int index;

	if ((index = this->isFull()) == -1)
	{
		delete m;
		std::cout << "Can't add an other materia" << std::endl;
		return ;
	}
	std::cout << "Learn materia : " << m->getType() << " in index : " << index << std::endl;
	this->_materia[index] = m;
}

AMateria*	MateriaSource::createMateria( std::string const & type )
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materia[i]->getType() == type)
			return this->_materia[i]->clone();
	}
	std::cout << "Unknown materia can't be created" << std::endl;
	return 0;
}
