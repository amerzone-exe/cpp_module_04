/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet                                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 16:18:21 by jpiquet         #+#    #+#             */
/*   Updated: 2026/01/08 16:18:21 by jpiquet        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal
{
    public:
		Animal( void );
		Animal( Animal const & src );
		Animal & operator=( Animal const & rightSide );
		virtual ~Animal( void );

		std::string		getType( void ) const;
		void			setType( std::string const & newtype );

		virtual void	makeSound( void ) const;

	protected:
		std::string		_type;
};

#endif
