/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 19:38:14 by jpiquet           #+#    #+#             */
/*   Updated: 2026/01/23 16:43:17 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
	public:
		Character( std::string name );
		Character( Character const & src );
		Character & operator=( Character const & rightSide );
		~Character( void );

		std::string const & getName( void ) const;
		void equip( AMateria* m );
		void unequip( int idx );
		void use( int idx, ICharacter & target );

		static void			emptyTrash( void );

	private:
		std::string			_name;
		AMateria**			_item;

		static AMateria**	_trash;
		static int			_wasteQuantity;

		int					isFull( void ) const;
		void				deleteItem( void );
};

#endif
