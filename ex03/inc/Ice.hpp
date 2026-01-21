/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 18:04:09 by jpiquet           #+#    #+#             */
/*   Updated: 2026/01/21 19:30:41 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
    public:
        Ice( void );
		Ice( Ice const & src );
		Ice & operator=( Ice const & rightSide );
        ~Ice( void );

		AMateria*	clone( void ) const;
		void		use( ICharacter & target );
	
	private:
};

#endif
