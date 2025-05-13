/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 14:17:19 by tborges-          #+#    #+#             */
/*   Updated: 2025/05/13 14:47:36 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"

int getLevelIndex(std::string level) {
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (int i = 0; i < 4; ++i) {
        if (levels[i] == level)
            return i;
    }
    return -1;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: ./harlFilter <level>" << std::endl;
        return 1;
    }

    std::string inputLevel = argv[1];
    int levelIndex = getLevelIndex(inputLevel);

    Harl harl;
    harl.complainFiltered(levelIndex);

    return 0;
}


