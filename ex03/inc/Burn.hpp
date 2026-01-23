/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Burn.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 18:04:05 by jpiquet           #+#    #+#             */
/*   Updated: 2026/01/23 13:37:37 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BURN_HPP
#define BURN_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Burn : public AMateria
{
	public:
		Burn( void );
		Burn( Burn const & src );
		Burn & operator=( Burn const & rightSide );
		~Burn( void );

		AMateria*	clone( void ) const;
		void		use( ICharacter & target );
	
	private:
};

#endif
