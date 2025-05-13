/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 16:32:59 by tborges-          #+#    #+#             */
/*   Updated: 2025/05/13 12:50:45 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_CPP
#define HUMANB_CPP
#include <iostream>
#include "Weapon.hpp"

class HumanB {
	private:
		Weapon *_weapon;
		std::string _name;

	public:
		HumanB(std::string name);
		HumanB(std::string name, Weapon &weapon);
		~HumanB();
		void setWeapon(Weapon &weapon);
		void attack();
};

#endif
