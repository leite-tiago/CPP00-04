/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 14:17:33 by tborges-          #+#    #+#             */
/*   Updated: 2025/05/13 14:46:39 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_CPP
#define HARL_CPP
#include <iostream>

class Harl {
	private:
		void debug();
		void info();
		void warning();
		void error();

	public:
		void complain(std::string level);
		void complainFiltered(int levelIndex);
};

#endif
