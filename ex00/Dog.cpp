#include "Dog.hpp"
#include <iostream>

/*Default constructor*/
Dog::Dog( void ) : Animal()
{
	this->_type = "Dog";
	std::cout << "Default Dog constructor called" << std::endl;
}

/*Copy constructor*/
Dog::Dog( Dog const & src ) : Animal(src)
{
	std::cout << "Default " << this->_type << " copy constructor called" << std::endl;
}

/*Assignation operator overload*/
Dog & Dog::operator=( Dog const & rightSide )
{
	std::cout << "Dog assignation operator overload" << std::endl;
	if (this != &rightSide)
	{
		Animal::operator=(rightSide);
	}
	return *this;
}

/*Default destructor*/
Dog::~Dog( void )
{
	std::cout << "Default Dog destructor called" << std::endl;
}

void	Dog::makeSound( void ) const
{
	std::cout << "The " << this->_type << " makes a loud : Bark! Bark!!!" << std::endl;
}
