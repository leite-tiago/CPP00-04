/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 12:03:44 by tborges-          #+#    #+#             */
/*   Updated: 2025/05/14 16:30:07 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"

int main() {
    std::cout << "---- Creating ClapTrap ----" << std::endl;
    ClapTrap a("CL4P-TP");
    a.attack("Bandit");
    a.beRepaired(5);
    a.takeDamage(6);

    std::cout << "\n---- Creating ScavTrap ----" << std::endl;
    ScavTrap s("SC4V-TP");
    s.attack("Raid Boss");
    s.beRepaired(10);
    s.takeDamage(40);
    s.guardGate();

    std::cout << "\n---- Destruction ----" << std::endl;
    return 0;
}
