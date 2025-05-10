/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 20:02:27 by tborges-          #+#    #+#             */
/*   Updated: 2025/05/10 23:46:12 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Contact.hpp"
#include "../inc/PhoneBook.hpp"

Contact::Contact()
{
	exists = false;
}

Contact::~Contact()
{
}

void Contact::create_contact(std::string first_name, std::string last_name,
	std::string nick_name, std::string phone_number, std::string darkest_secret)
{
	this->first_name = first_name;
	this->last_name = last_name;
	this->nick_name = nick_name;
	this->phone_number = phone_number;
	this->darkest_secret = darkest_secret;
	exists = true;
}

void Contact::print_phone_book()
{
	std::string first = first_name;
	std::string last = last_name;
	std::string nick = nick_name;
	if (first.length() > 10)
		first = first.substr(0, 9) + '.';
	if (last.length() > 10)
		last = last.substr(0, 9) + '.';
	if (nick.length() > 10)
		nick = nick.substr(0, 9) + '.';
	std::cout << std::setw(10) << std::right << first << "|";
	std::cout << std::setw(10) << std::right << last << "|";
	std::cout << std::setw(10) << std::right << nick << std::endl;
}

void Contact::print_contact()
{
	std::cout << "--------------------Contact info---------------------" << std::endl;
	std::cout << "First Name: " << first_name << std::endl;
	std::cout << "Last Name: " << last_name << std::endl;
	std::cout << "Nickname: " << nick_name << std::endl;
	std::cout << "Phone Number: " << phone_number << std::endl;
	std::cout << "Darkest Secret: " << darkest_secret << std::endl;
	std::cout << "-----------------------------------------------------" << std::endl;
	std::cout << std::endl;
}

bool Contact::check_contact()
{
	return (exists);
}
