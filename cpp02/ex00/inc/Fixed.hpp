/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 15:11:20 by tborges-          #+#    #+#             */
/*   Updated: 2025/05/13 15:19:49 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed {
	private:
		int _fixed_point_number_value;
		static const int _nbr_fractional_bits;

	public:
		Fixed();
		Fixed(const Fixed& ref);
		Fixed& operator=(const Fixed& ref);
		~Fixed();

		int getRawBits() const;
		void setRawBits(int const raw);
};

#endif
