#include "Brain.hpp"
#include <iostream>

/*Default constructor*/
Brain::Brain( void )
{
	std::cout << "Default Brain constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
			this->_ideas[i] = "empty ideas";
}

/*Initialization constructor*/
Brain::Brain( std::string ideas )
{
	std::cout << "Initialization Brain constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
			this->_ideas[i] = ideas;
}

/*Copy constructor*/
Brain::Brain( Brain const & src )
{
	for (int i = 0; i < 100; i++)
			this->_ideas[i] = src._ideas[i];
}

/*Assignation operator overload*/
Brain & Brain::operator=( Brain const & rhs )
{
	std::cout << "Brain operator assignation overload called" << std::endl;
	if (this != &rhs)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = rhs._ideas[i];
	}
	return *this;
}

/*Default destructor*/
Brain::~Brain( void )
{
	std::cout << "Default Brain destructor called" << std::endl;
}

std::string	Brain::getIdea( unsigned int index ) const
{
	return this->_ideas[index];
}

void		Brain::setIdea( std::string ideas, unsigned int index )
{
	this->_ideas[index] = ideas;
}
