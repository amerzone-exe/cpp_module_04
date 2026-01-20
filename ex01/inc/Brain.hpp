/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 16:56:41 by jpiquet           #+#    #+#             */
/*   Updated: 2026/01/20 16:56:48 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain
{
	public:
		Brain( void );
		Brain( std::string ideas );
		Brain( Brain const & src );
		Brain & operator=( Brain const & rhs );
		~Brain( void );

		std::string	getIdea( unsigned int index ) const;
		void		setIdea( std::string ideas, unsigned int index );

	private:
		std::string _ideas[100];
};

#endif
