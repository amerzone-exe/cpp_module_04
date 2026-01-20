/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet                                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 16:18:25 by jpiquet         #+#    #+#             */
/*   Updated: 2026/01/08 16:18:25 by jpiquet        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog( void );
		Dog( Dog const & src );
		Dog & operator=( Dog const & rightSide );
        ~Dog( void );

		void	makeSound( void ) const;
};

#endif