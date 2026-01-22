/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 10:45:04 by jpiquet           #+#    #+#             */
/*   Updated: 2026/01/22 14:53:39 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    public:
		MateriaSource( void );
		MateriaSource( MateriaSource const & src );
		MateriaSource & operator=( MateriaSource const & rightSide );
		~MateriaSource( void );

		void		learnMateria(AMateria*);
		AMateria*	createMateria( std::string const & type );
	
	private:
		AMateria **_materia;
		int			isFull( void ) const;
		void		deleteMateria( void );
};

#endif
