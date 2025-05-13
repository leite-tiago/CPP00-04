/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 16:32:59 by tborges-          #+#    #+#             */
/*   Updated: 2025/05/13 12:50:40 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanB.hpp"

HumanB::HumanB(std::string name)
{
	_name = name;
	_weapon = NULL;
	std::cout << _name << " was born with a without a weapon" << std::endl;
}

HumanB::HumanB(std::string name, Weapon &weapon) : _weapon(&weapon)
{
	_name = name;
	std::cout << _name << " was born with a " << _weapon->getType() << std::endl;
}

HumanB::~HumanB()
{
	std::cout << _name << " died" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
	std::cout << _name << " grabbed a " << _weapon->getType() << std::endl;
}

void HumanB::attack()
{
	std::cout << _name << " attacks with their " << (_weapon == NULL ? "hands" : _weapon->getType()) << std::endl;
}
