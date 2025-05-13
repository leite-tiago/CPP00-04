/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 15:11:20 by tborges-          #+#    #+#             */
/*   Updated: 2025/05/13 23:19:07 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed {
	private:
		int _fixed_point_number_value;
		static const int _nbr_fractional_bits;

	public:
		Fixed();
		Fixed(const int num);
		Fixed(const float num);
		Fixed(const Fixed& ref);
		Fixed& operator++();
		Fixed  operator++(int nb);
		Fixed& operator--();
		Fixed  operator--(int nb);
		Fixed& operator=(const Fixed& ref);
		Fixed operator+(const Fixed& ref) const;
		Fixed operator-(const Fixed& ref) const;
		Fixed operator*(const Fixed& ref) const;
		Fixed operator/(const Fixed& ref) const;
		bool	operator>(const Fixed& ref) const;
		bool	operator<(const Fixed& ref) const;
		bool	operator>=(const Fixed& ref) const;
		bool	operator<=(const Fixed& ref) const;
		bool	operator==(const Fixed& ref) const;
		bool	operator!=(const Fixed& ref) const;
		static Fixed& min(Fixed& ref1, Fixed& ref2);
		static Fixed& max(Fixed& ref1, Fixed& ref2);
		static const Fixed& min(const Fixed& ref1, const Fixed& ref2);
		static const Fixed& max(const Fixed& ref1, const Fixed& ref2);
		~Fixed();

		int getRawBits() const;
		void setRawBits(int const raw);
		float toFloat() const;
		int toInt() const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif
