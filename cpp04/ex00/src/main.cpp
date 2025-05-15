/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 00:53:22 by tborges-          #+#    #+#             */
/*   Updated: 2025/05/15 01:22:26 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include "../inc/WrongAnimal.hpp"
#include "../inc/WrongCat.hpp"

int main()
{
	std::cout << "=== Proper polymorphism ===" << std::endl;

	const Animal* animal = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << "\nTypes:" << std::endl;
	std::cout << "dog: " << dog->getType() << std::endl;
	std::cout << "cat: " << cat->getType() << std::endl;

	std::cout << "\nSounds:" << std::endl;
	dog->makeSound();
	cat->makeSound();
	animal->makeSound();

	delete animal;
	delete dog;
	delete cat;

	std::cout << "\n=== Wrong polymorphism ===" << std::endl;

	const WrongAnimal* wrongAnimal = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();

	std::cout << "\nTypes:" << std::endl;
	std::cout << "wrongCat: " << wrongCat->getType() << std::endl;

	std::cout << "\nSounds:" << std::endl;
	wrongCat->makeSound();
	wrongAnimal->makeSound();

	delete wrongAnimal;
	delete wrongCat;

	return 0;
}
