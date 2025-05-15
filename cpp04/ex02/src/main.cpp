/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 00:53:22 by tborges-          #+#    #+#             */
/*   Updated: 2025/05/15 01:54:53 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"

int main() {
	std::cout << "--- Creating Dog and Cat as Animal pointers ---" << std::endl;
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << "\n--- Types ---" << std::endl;
	std::cout << "Dog type: " << dog->getType() << std::endl;
	std::cout << "Cat type: " << cat->getType() << std::endl;

	std::cout << "\n--- Sounds ---" << std::endl;
	dog->makeSound();
	cat->makeSound();

	std::cout << "\n--- Deleting ---" << std::endl;
	delete dog;
	delete cat;

	// const Animal* animal = new Animal(); // ❌ ERROR: cannot instantiate abstract class

	return 0;
}
