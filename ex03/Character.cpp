/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 19:38:25 by jpiquet           #+#    #+#             */
/*   Updated: 2026/01/22 15:07:29 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

/*Default constructor*/
Character::Character( std::string name ) : _name(name)
{
	this->_item = new AMateria*[4];
	this->_item[0] = NULL;
	this->_item[1] = NULL;
	this->_item[2] = NULL;
	this->_item[3] = NULL;
	std::cout << "Default constructor called" << std::endl;
}

/*Copy constructor*/
Character::Character( Character const & src ) : _name(src._name)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	// this->_item = new AMateria*[4];
	// this->_item[0] = src._item[0]->clone();
	// this->_item[1] = src._item[1]->clone();
	// this->_item[2] = src._item[2]->clone();
	// this->_item[3] = src._item[3]->clone();
}

void	Character::deleteItem( void )
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_item[i] != NULL)
			delete this->_item[i];
	}
	delete [] this->_item;
}

/*Assignation operator overload*/
Character & Character::operator=( Character const & rightSide )
{
	if (this != &rightSide)
	{
		this->deleteItem();
		this->_name = rightSide._name;
		this->_item = new AMateria*[4];
		this->_item[0] = rightSide._item[0]->clone();
		this->_item[1] = rightSide._item[1]->clone();
		this->_item[2] = rightSide._item[2]->clone();
		this->_item[3] = rightSide._item[3]->clone();
	}
	return *this;
}

/*Default destructor*/
Character::~Character( void )
{
	this->deleteItem();
	std::cout << "Default destructor called" << std::endl;
}

std::string const &	Character::getName( void ) const
{
	return this->_name;
}

int					Character::isFull( void ) const
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_item[i] == NULL)
			return i;
	}
	return -1;
}

void Character::equip( AMateria* m )
{
	int index;
	
	if ((index = this->isFull()) == -1)
	{
		std::cout << "Inventory is full, can't equipe an other Materia" << std::endl;
		return ;
	}
	this->_item[index] = m;
}

void				Character::unequip( int idx )
{
	if ((idx > 4 || idx < 0) || (this->_item[idx] == NULL))
	{
		std::cout << "This Materia doesn't exit, it can't be unequiped" << std::endl;
		return ;
	}
	this->trash = this->_item[idx];
	this->_item[idx] = NULL;
}

void				Character::use( int idx, ICharacter & target )
{
	if ((idx > 4 || idx < 0) || (this->_item[idx] == NULL))
	{
		std::cout << "This Materia doesn't exit, it can't be used" << std::endl;
		return ;
	}
	this->_item[idx]->use( target );
}
