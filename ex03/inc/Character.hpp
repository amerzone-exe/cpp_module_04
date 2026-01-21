/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 19:38:14 by jpiquet           #+#    #+#             */
/*   Updated: 2026/01/21 20:39:49 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
	public:
		Character( void );
		Character( Character const & src );
		Character & operator=( Character const & rightSide );
		~Character( void );

		std::string const & getName( void ) const;
		void				equip(AMateria *m);
		void				unequip(int idx);
		void				use(int idx, ICharacter & target);

		int					isFull( AMateria *array[] );
		AMateria*			trash;

	private:
		std::string	_name;
		AMateria*	_item[4];
};

#endif
