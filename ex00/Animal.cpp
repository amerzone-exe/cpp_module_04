#include "Animal.hpp"
#include <iostream>

/*Default constructor*/
Animal::Animal( void ) : _type("Animal")
{
	std::cout << "Default Animal constructor called" << std::endl;
}

/*Copy constructor*/
Animal::Animal( Animal const & src ) : _type(src._type)
{
	std::cout << "Default Animal copy constructor called" << std::endl;
}

/*Assignation operator overload*/
Animal & Animal::operator=( Animal const & rhs )
{
	std::cout << "Animal assignation operator overload" << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	return *this;
}

/*Default destructor*/
Animal::~Animal( void )
{
	std::cout << "Default Animal destructor called" << std::endl;
}

void		Animal::makeSound( void ) const
{
	std::cout << "The " << this->_type << " make a basic animal sound...Boring" << std::endl;
}

/*Getter & setter*/
std::string	Animal::getType( void ) const
{
	return this->_type;
}

void	Animal::setType( std::string const & newtype )
{
	this->_type = newtype;
}
