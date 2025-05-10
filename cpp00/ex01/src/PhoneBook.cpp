/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 19:59:23 by tborges-          #+#    #+#             */
/*   Updated: 2025/05/10 23:53:10 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PhoneBook.hpp"
#include "../inc/Contact.hpp"

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::add()
{
	static int	i;
	std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string phone_number;
	std::string darkest_secret;

	std::cout << "Enter first name: ";
	std::getline(std::cin >> std::ws, first_name);
	std::cout << "Enter last name: ";
	std::getline(std::cin >> std::ws, last_name);
	std::cout <<  "Enter nickname: ";
	std::getline(std::cin >> std::ws, nick_name);
	std::cout << "Enter phone number: ";
	std::getline(std::cin >> std::ws, phone_number);
	std::cout << "Enter darkest secret: ";
	std::getline(std::cin >> std::ws, darkest_secret);
	std::cout << std::endl;
	contacts[i].create_contact(first_name, last_name, nick_name, phone_number, darkest_secret);
	i++;
	if (i == 8)
		i = 0;
}

void	PhoneBook::search()
{
	int	i = 0;

	std::cout << std::setw(10) << std::right << "Index" << "|";
	std::cout << std::setw(10) << std::right << "First Name" << "|";
	std::cout << std::setw(10) << std::right << "Last Name" << "|";
	std::cout << std::setw(10) << std::right << "Nickname" << std::endl;
	std::cout << "------------------------------------------------" << std::endl;
	while (i < 8)
	{
		std::cout << std::setw(10) << std::right << i + 1 << "|";
		this->contacts[i].print_phone_book();
		i++;
	}
	std::cout << "Type the index of the contact to see more details >> ";
	std::cin >> std::ws >> i;
	i--;
	if (!std::cin || i > 7 || i < 0)
	{
		std::cin.clear();
		std::cin.ignore(1000, '\n');
		std::cout << "Please enter a valid index." << std::endl;
		return ;
	}
	else if (this->contacts[i].check_contact() == 0)
	{
		std::cin.clear();
		std::cin.ignore(1000, '\n');
		std::cout << "The slot "<< i + 1 << " is empty." << std::endl;
		return ;
	}
	this->contacts[i].print_contact();
}
