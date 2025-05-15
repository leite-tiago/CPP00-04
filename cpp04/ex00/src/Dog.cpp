/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 00:48:54 by tborges-          #+#    #+#             */
/*   Updated: 2025/05/15 01:05:48 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

Dog::Dog() {
	type = "Dog";
	std::cout << "Dog default constructor called\n";
}

Dog::Dog(const Dog &other) : Animal(other) {
	std::cout << "Dog copy constructor called\n";
	*this = other;
}

Dog &Dog::operator=(const Dog &other) {
	std::cout << "Dog copy assignment operator called\n";
	if (this != &other) {
		Animal::operator=(other);
	}
	return *this;
}

Dog::~Dog() {
	std::cout << "Dog destructor called\n";
}

void Dog::makeSound() const {
	std::cout << "Woof! 🐶\n";
}
