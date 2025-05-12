/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 18:52:47 by tborges-          #+#    #+#             */
/*   Updated: 2025/05/12 01:23:47 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

Zombie* newZombie(std::string name);

void	randomChump(std::string name);

int	main()
{
	randomChump("Rick");
	Zombie	*p = newZombie("Morty");
	p->announce();
	delete p;
	return (0);
}
