/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet                                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 13:32:36 by jpiquet         #+#    #+#             */
/*   Updated: 2026/01/20 13:32:36 by jpiquet        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>

class WrongAnimal
{
    public:
        WrongAnimal( void );
		WrongAnimal( WrongAnimal const & src );
		WrongAnimal & operator=( WrongAnimal const & rhs );
        ~WrongAnimal( void );
	
		std::string	getType( void ) const;
		void		setType( std::string const & newtype );

		void		makeSound( void ) const;

	protected:
		std::string	_type;
};

#endif
