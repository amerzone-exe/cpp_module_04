/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 17:09:37 by jpiquet           #+#    #+#             */
/*   Updated: 2026/01/22 17:04:05 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>

class ICharacter;

class AMateria
{
	public:
		AMateria( void );
		AMateria( std::string const & type );
		AMateria( AMateria const & src );
		AMateria & operator=( AMateria const & rightSide );
		virtual ~AMateria( void );

		std::string const & getType( void ) const;

		virtual AMateria * clone( void ) const = 0;
		virtual void use( ICharacter & target );
	
	protected:
		std::string	_type;
};

#endif
