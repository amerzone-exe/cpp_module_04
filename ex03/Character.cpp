/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 19:38:25 by jpiquet           #+#    #+#             */
/*   Updated: 2026/01/21 20:47:35 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

/*Default constructor*/
Character::Character( void )
{
	this->_item[0] = NULL;
	this->_item[1] = NULL;
	this->_item[2] = NULL;
	this->_item[3] = NULL;

	std::cout << "Default constructor called" << std::endl;
}

/*Copy constructor*/
Character::Character( Character const & src )
{
	std::cout << "Copy constructor called" << std::endl;
}

/*Assignation operator overload*/
Character & Character::operator=( Character const & rightSide )
{
	if (this != &rightSide)
	return *this;
}

/*Default destructor*/
Character::~Character( void )
{
	for (int i = 0; i < 4; i++)
	{
		delete this->_item[i];
	}
	delete [] this->_item;

	std::cout << "Default destructor called" << std::endl;
}

std::string const &	Character::getName( void ) const
{
	return this->_name;
}

int					Character::isFull( AMateria *array[] )
{
	for (int i = 0; i < 4; i++)
	{
		if (array[i] == NULL)
			return i;
	}
	return -1;
}

void				Character::equip( AMateria *m )
{
	int index;
	
	if ((index = isFull(this->_item)) == -1)
	{
		std::cout << "Inventory is full, can't equipe an other Materia" << std::endl;
		return ;
	}
	this->_item[index] = m;
}

void				Character::unequip( int idx )
{
	if ((idx > 4 || idx < 0) && (this->_item[idx] == NULL))
	{
		std::cout << "This Materia doesn't exit, it can't be unequiped" << std::endl;
		return ;
	}
	this->trash = this->_item[idx];
	this->_item[idx] = NULL;
}

void				Character::use( int idx, ICharacter & target )
{
	if ((idx > 4 || idx < 0) && (this->_item[idx] == NULL))
	{
		std::cout << "This Materia doesn't exit, it can't be used" << std::endl;
		return ;
	}
	this->_item[idx]->use( target );
}
