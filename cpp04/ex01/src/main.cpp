/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 00:53:22 by tborges-          #+#    #+#             */
/*   Updated: 2025/05/15 01:42:36 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"

int main() {
	const int size = 4;
	Animal* animals[size];

	std::cout << "--- Creating animals ---" << std::endl;
	for (int i = 0; i < size / 2; i++)
		animals[i] = new Dog();
	for (int i = size / 2; i < size; i++)
		animals[i] = new Cat();

	std::cout << "\n--- Making sounds ---" << std::endl;
	for (int i = 0; i < size; i++) {
		std::cout << animals[i]->getType() << ": ";
		animals[i]->makeSound();
	}

	std::cout << "\n--- Testing deep copy ---" << std::endl;
	Dog dog1;
	dog1.getBrain()->setIdea(0, "Chasing cats");
	dog1.getBrain()->setIdea(1, "Playing fetch");

	Dog dog2 = dog1;
	dog2.getBrain()->setIdea(0, "Sleeping");

	std::cout << "Dog1 idea 0: " << dog1.getBrain()->getIdea(0) << std::endl;
	std::cout << "Dog2 idea 0: " << dog2.getBrain()->getIdea(0) << std::endl;

	Cat cat1;
	cat1.getBrain()->setIdea(0, "Sleeping all day");
	cat1.getBrain()->setIdea(1, "Chasing laser pointers");

	Cat cat2;
	cat2 = cat1;
	cat2.getBrain()->setIdea(1, "Eating fish");

	std::cout << "Cat1 idea 1: " << cat1.getBrain()->getIdea(1) << std::endl;
	std::cout << "Cat2 idea 1: " << cat2.getBrain()->getIdea(1) << std::endl;

	std::cout << "\n--- Deleting animals ---" << std::endl;
	for (int i = 0; i < size; i++)
		delete animals[i];

	return 0;
}
