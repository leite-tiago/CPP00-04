/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 20:02:29 by tborges-          #+#    #+#             */
/*   Updated: 2025/05/10 23:56:55 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PhoneBook.hpp"

int	main(void)
{
	PhoneBook phone_book;
	std::string cmd;

	std::cout << "*----------------------------------*" << std::endl;
	std::cout << "| Welcome to My Awesome PhoneBook! |" << std::endl;
	std::cout << "*----------------------------------*" << std::endl;
	std::cout << std::endl;
	while (1)
	{
		std::cout << "Please enter one of these commands: ADD, SEARCH or EXIT" << std::endl;
		std::cout << ">> ";
		std::getline(std::cin >> std::ws, cmd);
		if (!std::cin)
			break;
		else if (cmd == "ADD")
			phone_book.add();
		else if (cmd == "SEARCH")
			phone_book.search();
		else if (cmd == "EXIT")
		{
			std::cout << "Bye!" << std::endl;
			break;
		}
		else
			std::cout << "Not a valid command, please try again" << std::endl;
	}
	return (0);
}
