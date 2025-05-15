/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 15:11:30 by tborges-          #+#    #+#             */
/*   Updated: 2025/05/15 13:33:52 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main() {
	Point a(0, 0);
	Point b(10, 0);
	Point c(0, 10);

	Point inside(3, 3);
	Point outside(10, 10);
	Point edge(0, 5);
	Point vertex(0, 0);

	std::cout << "Inside: " << bsp(a, b, c, inside) << std::endl;   // true
	std::cout << "Outside: " << bsp(a, b, c, outside) << std::endl; // false
	std::cout << "On edge: " << bsp(a, b, c, edge) << std::endl;    // false
	std::cout << "On vertex: " << bsp(a, b, c, vertex) << std::endl;// false

	return 0;
}

