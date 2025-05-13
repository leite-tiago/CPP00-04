/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 14:17:16 by tborges-          #+#    #+#             */
/*   Updated: 2025/05/13 14:47:05 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"

void	Harl::debug()
{
	std::cout << "[ DEBUG ]\n";
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-"
			  << "pickle-special-ketchup burger.I really do !" << std::endl;
}

void	Harl::info()
{
	std::cout << "[ INFO ]\n";
	std::cout << "I cannot believe adding extra bacon costs more money. "
			  << "You didn't put enough bacon in my burger! If you did, "
			  << "I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning()
{
	std::cout << "[ WARNING ]\n";
	std::cout << "I think I deserve to have some extra bacon for free. "
			  << "I've been coming for years, whereas you started working "
			  << "here just last month." << std::endl;
}

void	Harl::error()
{
	std::cout << "[ ERROR ]\n";
	std::cout << "This is unacceptable! I want to speak to the manager now."
			  << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
        void (Harl::*actions[4])(void) = {
            &Harl::debug,
            &Harl::info,
            &Harl::warning,
            &Harl::error
        };

        for (int i = 0; i < 4; i++) {
            if (levels[i] == level) {
                (this->*actions[i])();
                return;
            }
        }

        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;

}

void	Harl::complainFiltered(int levelIndex) {
    switch (levelIndex) {
        case 0:
            debug();
        case 1:
            info();
        case 2:
            warning();
        case 3:
            error();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}
