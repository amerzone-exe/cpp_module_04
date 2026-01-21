/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 18:04:05 by jpiquet           #+#    #+#             */
/*   Updated: 2026/01/21 19:30:48 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
	public:
		Cure( void );
		Cure( Cure const & src );
		Cure & operator=( Cure const & rightSide );
		~Cure( void );

		AMateria*	clone( void ) const;
		void		use( ICharacter & target );
	
	private:
};

#endif
