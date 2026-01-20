/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 16:12:10 by jpiquet           #+#    #+#             */
/*   Updated: 2026/01/20 20:52:38 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	/*--------------BASIC SUBJECT TEST----------------*/

	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;//should not create a leak
	delete i;

	/*--------------ASKED BY THE SUBJECT--------------*/
	Animal **zoo = new Animal*[10];
	std::cout << std::endl;
	
	for (int i = 0; i < 10; i++)
	{
		if (i < 5)
			zoo[i] = new Dog();
		else
		{
			zoo[i] = new Cat();
		}
		std::cout << std::endl;
	}
	for (int i = 0; i < 10; i++)
	{
		std::cout << zoo[i]->getType() << " : ";
		zoo[i]->makeSound();
	}
	std::cout << std::endl;

	for (int i = 0; i < 10; i++)
	{
		delete zoo[i];
	}
	delete [] zoo;
	std::cout << std::endl;

	/*--------------ASSIGNATION--------------*/
	// Dog a("EAT !!");
	// Dog b("PLAY !!");
	// std::cout << std::endl;

	// std::cout << "Before assignation" << std::endl;
	// for (int i = 0; i < 10; i++)
	// {
	// 	std::cout << "dog a : ";
	// 	a.printTought(i);
	// }
	// std::cout << std::endl;

	// for (int i = 0; i < 10; i++)
	// {
	// 	std::cout << "dog b : ";
	// 	b.printTought(i);
	// }
	// std::cout << std::endl;

	// std::cout << "Assign a to b" << std::endl;
	// b = a;

	// std::cout << "After assignation" << std::endl;
	// for (int i = 0; i < 10; i++)
	// {
	// 	std::cout << "dog b : ";
	// 	b.printTought(i);
	// }
	// std::cout << std::endl;

	/*--------------COPY--------------*/

	const Dog a("MANGER !!");
	const Dog b("WOAF !!");
	std::cout << std::endl;
 
	std::cout << "Before copy" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << "Dog a : ";
		a.printTought(i);
	}
	std::cout << std::endl;

	for (int i = 0; i < 10; i++)
	{
		std::cout << "Dog b : ";
		b.printTought(i);
	}
	std::cout << std::endl;

	std::cout << "Created Dog c by copying Dog a" << std::endl;

	const Dog c(a);
	std::cout << std::endl;

	for (int i = 0; i < 10; i++)
	{
		std::cout << "Dog c : ";
		c.printTought(i);
	}
	c.getType();
	c.makeSound();
	std::cout << std::endl;

	/*-------------------------------------------*/

	// b = a;

	// std::cout << "After assignation" << std::endl;
	// for (int i = 0; i < 10; i++)
	// {
	// 	std::cout << "dog b : ";
	// 	b.printTought(i);
	// }
	// std::cout << std::endl;


	// Dog *a = new Dog("EAT !!");
	// Dog *b = new Dog("PLAY !!");

	// delete b;
	// delete b;
	// std::cout << a->printThought() << std::endl;
	

	// delete zoo;
	// const Animal *meta = new Animal();
	// const Animal *j = new Dog();
	// const Animal *i = new Cat();

	// std::cout << "i address = " << &i << std::endl; 
	// std::cout << "j address = " << &j << std::endl;

	// std::cout << std::endl;
	// const WrongAnimal *wrongcat = new WrongCat();

	// std::cout << "j type " << j->getType() << " " << std::endl;
	// std::cout << "i type " << i->getType() << " " << std::endl;
	

	// i->makeSound(); // will output the cat sound!
	// j->makeSound();
	// meta->makeSound();

	// std::cout << "Assign i (cat) to j (dog) and display make sound for j" << std::endl;
	// delete j;

	// j = i;

	// std::cout << "j type now " << j->getType() << " " << std::endl;
	// j->makeSound();
	// std::cout << std::endl;

	// std::cout << "Called wrongcat makeSound() member function :" << std::endl;
	// wrongcat->makeSound();

	// std::cout << "Copy animal i (cat) to a new animal : " << std::endl;

	// const Animal *cpy(j);

	// cpy->makeSound();
	// std::cout << std::endl;

	// std::cout << "call again : i type " << i->getType() << " " << std::endl;
	// i->makeSound(); // will output the cat sound!

	// delete meta;

	// std::cout << "i address = " << i << std::endl; 
	// std::cout << "j address = " << j << std::endl;
	// std::cout << "cpy address = " << cpy << std::endl;

	// delete j;
	// delete wrongcat;

	return 0;
}
