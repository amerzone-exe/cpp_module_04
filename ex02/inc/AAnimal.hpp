/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 16:57:01 by jpiquet           #+#    #+#             */
/*   Updated: 2026/01/20 20:50:14 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <string>

class AAnimal
{
    public:
		AAnimal( void );
		AAnimal( AAnimal const & src );
		AAnimal & operator=( AAnimal const & rightSide );
		virtual ~AAnimal( void );

		std::string		getType( void ) const;
		void			setType( std::string const & newtype );

		virtual void	makeSound( void ) const = 0;

	protected:
		std::string	_type;
};

#endif
