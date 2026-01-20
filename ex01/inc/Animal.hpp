/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 16:57:01 by jpiquet           #+#    #+#             */
/*   Updated: 2026/01/20 16:57:04 by jpiquet          ###   ########.fr       */
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
		std::string	_type;
};

#endif
