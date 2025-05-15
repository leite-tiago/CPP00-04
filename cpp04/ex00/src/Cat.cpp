/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 00:48:47 by tborges-          #+#    #+#             */
/*   Updated: 2025/05/15 01:07:33 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << "Cat default constructor called\n";
}

Cat::Cat(const Cat &other) : Animal(other)
{
	std::cout << "Cat copy constructor called\n";
	*this = other;
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout << "Cat copy assignment operator called\n";
	if (this != &other)
		Animal::operator=(other);
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called\n";
}

void Cat::makeSound() const
{
	std::cout << "Meow! 🐱\n";
}

