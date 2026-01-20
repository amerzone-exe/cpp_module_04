/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet                                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 16:18:28 by jpiquet         #+#    #+#             */
/*   Updated: 2026/01/08 16:18:28 by jpiquet        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	public:
		Cat( void );
		Cat( std::string ideas );
		Cat( Cat const & src );
		Cat & operator=( Cat const & rightSide );
		~Cat( void );

		void	makeSound( void ) const;
		void	printTought( unsigned int i) const;
		// void	printTought( unsigned int i) const;
	
	private:
		Brain *_brain;
};

#endif
