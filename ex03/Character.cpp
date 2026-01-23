/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 19:38:25 by jpiquet           #+#    #+#             */
/*   Updated: 2026/01/23 19:53:04 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

AMateria**	Character::_trash = NULL;
int			Character::_wasteQuantity = 0;

/*Default constructor*/
Character::Character( std::string name ) : _name(name)
{
	this->_item = new AMateria*[4];
	this->_item[0] = NULL;
	this->_item[1] = NULL;
	this->_item[2] = NULL;
	this->_item[3] = NULL;
	std::cout << "Default " << _name << " constructor called" << std::endl;
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

	if (!m)
		return ;
	if ((index = this->isFull()) == -1)
	{
		delete m;
		std::cout << "Inventory is full, can't equipe an other Materia" << std::endl;
		return ;
	}
	std::cout << m->getType() << " is equiped to " << this->_name << std::endl;
	this->_item[index] = m;
}

void				Character::unequip( int idx )
{
	if ((idx > 4 || idx < 0) || (this->_item[idx] == NULL))
	{
		std::cout << "This Materia doesn't exit, it can't be unequiped" << std::endl;
		return ;
	}

	if (!_wasteQuantity)
	{
		std::cout << "HELLO" << std::endl;
		_trash = new AMateria *[_wasteQuantity + 1];
		this->_trash[_wasteQuantity] = this->_item[idx];
		_wasteQuantity++;
	}
	else
	{
		AMateria**	temp = _trash;
		for (int i = 0; i < _wasteQuantity; i++)
			temp[i] = _trash[i];
		_trash = new AMateria *[_wasteQuantity + 1];
		for (int i = 0; i < _wasteQuantity; i++)
			_trash[i] = temp[i];
		for (int i = 0; i < _wasteQuantity; i++)
			delete temp[i];
		delete [] temp;
		this->_trash[_wasteQuantity] = this->_item[idx];
		_wasteQuantity++;
	}
	std::cout << this->_name << " : item " << idx << " of type : " << this->_item[idx]->getType() << " unequiped !" << std::endl;
	this->_item[idx] = NULL;
}

void				Character::use( int idx, ICharacter & target )
{
	if ((idx > 4 || idx < 0) || (this->_item[idx] == NULL))
	{
		std::cout << "This Materia doesn't exit, it can't be used" << std::endl;
		return ;
	}
	std::cout << this->_name << " : " << std::flush;
	this->_item[idx]->use( target );
}

void			Character::emptyTrash( void )
{
	for (int i = 0; i < _wasteQuantity; i++)
	{
		if (_trash[i] != NULL)
			delete _trash[i];
	}
	delete [] _trash;
}
