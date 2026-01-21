/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 18:21:00 by jpiquet           #+#    #+#             */
/*   Updated: 2026/01/21 18:35:41 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

int main( void )
{
	Ice glace;
	AMateria *froid = glace.clone();

	std::cout << "Ice glace type : " << glace.getType() << std::endl;
	std::cout << "AMateria froid type : " << froid->getType() << std::endl;
	
	return 0;
}
