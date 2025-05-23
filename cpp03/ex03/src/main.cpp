/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 12:03:44 by tborges-          #+#    #+#             */
/*   Updated: 2025/05/14 18:42:44 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/DiamondTrap.hpp"

int main() {
    {
        std::cout << "---- Creating ClapTrap ----" << std::endl;
        ClapTrap a("CL4P-TP");
        a.attack("Bandit");
        a.beRepaired(5);
        a.takeDamage(6);
    }
    std::cout << std::endl;
    {
        std::cout << "\n---- Creating ScavTrap ----" << std::endl;
        ScavTrap s("SC4V-TP");
        s.attack("Raid Boss");
        s.beRepaired(10);
        s.takeDamage(40);
        s.guardGate();
    }
    std::cout << std::endl;
    {

        std::cout << "--- Creating FragTrap ---" << std::endl;
        FragTrap frag("FR4G-TP");
        frag.attack("Target Dummy");
        frag.takeDamage(20);
        frag.beRepaired(10);
        frag.highFivesGuys();
    }
    std::cout << std::endl;
    {
        std::cout << "--- Creating DiamondTrap ---" << std::endl;
        DiamondTrap dt("DI4M-TP");
        dt.attack("Target Dummy");
        dt.takeDamage(40);
        dt.beRepaired(20);
        dt.highFivesGuys();
        dt.guardGate();
        dt.whoAmI();
    }
    return 0;
}
