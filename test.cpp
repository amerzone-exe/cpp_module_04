/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 16:35:09 by jpiquet           #+#    #+#             */
/*   Updated: 2026/01/22 16:42:54 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class IBonjour
{
	public :
		virtual ~IBonjour( void ) {}
		virtual void sayHello ( void ) = 0;

};

class English : public IBonjour
{
	public :
		English() 
		{
			std::cout << "constructor" << std::endl;
		}
		~English() {}
		void sayHello ( void )
		{
			std::cout << "HELLO" << std::endl;
		}
};

class French : public IBonjour
{
	public:
		French() 
		{
			std::cout << "constructor" << std::endl;
		}
		~French() {}
		void sayHello ( void )
		{
			std::cout << "BONJOUR" << std::endl;
		}
};

int main( void )
{
	IBonjour *a = new English();
	IBonjour *b = new French();

	a->sayHello();
	b->sayHello();

	return 0;
}