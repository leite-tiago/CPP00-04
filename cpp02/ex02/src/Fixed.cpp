/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 15:11:26 by tborges-          #+#    #+#             */
/*   Updated: 2025/05/13 23:31:45 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

const int	Fixed::_nbr_fractional_bits = 8;

Fixed::Fixed()
{
	_fixed_point_number_value = 0;
}

Fixed::Fixed(const int num)
{
	setRawBits(num << _nbr_fractional_bits);
}

Fixed::Fixed(const float num)
{
	setRawBits(roundf(num * (1 << _nbr_fractional_bits)));
}

Fixed::Fixed(const Fixed& ref)
{
	*this = ref;
}

Fixed&	Fixed::operator=(const Fixed& ref)
{
	_fixed_point_number_value = ref.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
}

Fixed	Fixed::operator+(const Fixed& ref) const
{
	return Fixed(this->toFloat() + ref.toFloat());
}

Fixed	Fixed::operator-(const Fixed& ref) const
{
	return Fixed(this->toFloat() - ref.toFloat());
}

Fixed	Fixed::operator*(const Fixed& ref) const
{
	return Fixed(this->toFloat() * ref.toFloat());
}

Fixed	Fixed::operator/(const Fixed& ref) const
{
	return Fixed(this->toFloat() / ref.toFloat());
}

bool		Fixed::operator>(const Fixed& ref) const
{
	return (_fixed_point_number_value > ref._fixed_point_number_value);
}

bool		Fixed::operator<(const Fixed& ref) const
{
	return (_fixed_point_number_value < ref._fixed_point_number_value);
}

bool		Fixed::operator>=(const Fixed& ref) const
{
	return (_fixed_point_number_value >= ref._fixed_point_number_value);
}

bool		Fixed::operator<=(const Fixed& ref) const
{
	return (_fixed_point_number_value <= ref._fixed_point_number_value);
}

bool		Fixed::operator==(const Fixed& ref) const
{
	return (_fixed_point_number_value == ref._fixed_point_number_value);
}

bool		Fixed::operator!=(const Fixed& ref) const
{
	return (_fixed_point_number_value != ref._fixed_point_number_value);
}

Fixed&	Fixed::operator++()
{
	_fixed_point_number_value++;
	return (*this);
}

Fixed	Fixed::operator++(int nb)
{
	(void)nb;
	Fixed tp(this->toFloat());
	_fixed_point_number_value++;
	return tp;
}

Fixed&	Fixed::operator--()
{
	_fixed_point_number_value--;
	return (*this);
}

Fixed	Fixed::operator--(int nb)
{
	(void)nb;
	Fixed tp(this->toFloat());
	_fixed_point_number_value--;
	return tp;
}

Fixed&	Fixed::min(Fixed &ref1, Fixed &ref2)
{
	if (ref1 < ref2)
		return ref1;
	return ref2;
}

Fixed const &Fixed::min(const Fixed &ref1, const Fixed &ref2)
{
	if (ref1 < ref2)
		return ref1;
	return ref2;
}

Fixed&	Fixed::max(Fixed &ref1, Fixed &ref2)
{
	if (ref1 > ref2)
		return ref1;
	return ref2;
}

Fixed const &Fixed::max(const Fixed &ref1, const Fixed &ref2)
{
	if (ref1 > ref2)
		return ref1;
	return ref2;
}

int		Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return _fixed_point_number_value;
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_fixed_point_number_value = raw;
}

float	Fixed::toFloat() const
{
	return ((float)getRawBits() / (1 << _nbr_fractional_bits));
}

int		Fixed::toInt() const
{
	return (getRawBits() >> _nbr_fractional_bits);
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
	os << obj.toFloat();
	return os;
}
