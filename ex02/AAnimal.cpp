#include "AAnimal.hpp"
#include <iostream>

/*Default constructor*/
AAnimal::AAnimal( void ) : _type("AAnimal")
{
	std::cout << "Default AAnimal constructor called" << std::endl;
}

/*Copy constructor*/
AAnimal::AAnimal( AAnimal const & src ) : _type(src._type)
{
	std::cout << "Default AAnimal copy constructor called" << std::endl;
}

/*Assignation operator overload*/
AAnimal & AAnimal::operator=( AAnimal const & rhs )
{
	std::cout << "AAnimal assignation operator overload" << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	return *this;
}

/*Default destructor*/
AAnimal::~AAnimal( void )
{
	std::cout << "Default AAnimal destructor called" << std::endl;
}

/*Getter & setter*/
std::string	AAnimal::getType( void ) const
{
	return this->_type;
}

void	AAnimal::setType( std::string const & newtype )
{
	this->_type = newtype;
}
