/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 13:31:48 by tborges-          #+#    #+#             */
/*   Updated: 2025/05/15 13:34:40 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Point.hpp"

static Fixed area(Point const a, Point const b, Point const c)
{
	Fixed result = (a.getX() * (b.getY() - c.getY()) +
	                b.getX() * (c.getY() - a.getY()) +
	                c.getX() * (a.getY() - b.getY())) / Fixed(2);
	return result < Fixed(0) ? result * Fixed(-1) : result;
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed full = area(a, b, c);
	Fixed a1 = area(point, b, c);
	Fixed a2 = area(a, point, c);
	Fixed a3 = area(a, b, point);

	// Garantir que o ponto não está sobre uma borda nem num vértice
	if (a1 == Fixed(0) || a2 == Fixed(0) || a3 == Fixed(0))
		return false;

	return (a1 + a2 + a3 == full);
}
