/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 12:03:44 by tborges-          #+#    #+#             */
/*   Updated: 2025/05/14 14:44:55 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

int	main(void)
{
	ClapTrap bot("Clappy");

	bot.attack("Target Dummy");
	bot.takeDamage(4);
	bot.beRepaired(3);
	bot.takeDamage(10);
	bot.attack("Another Target");
	bot.beRepaired(5);

	return (0);
}
