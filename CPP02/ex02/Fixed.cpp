/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 10:21:46 by ibouram           #+#    #+#             */
/*   Updated: 2025/01/05 11:29:58 by ibouram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
{
	value = 0;
}

Fixed::Fixed(const Fixed &f)
{
	*this = f;
}

Fixed::Fixed(const int f)
{
	this->value = f * (1 << frac);
}

Fixed::Fixed(const float f)
{
	this->value = roundf(f * (1 << frac));
}

Fixed &Fixed::operator=(const Fixed &f)
{
	value = f.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	
}

float Fixed::toFloat( void ) const
{
	return ((float)(this->value) / (1 << frac));
}

int Fixed::toInt ( void ) const
{
	return (this->value / (1 << frac));
}


int	Fixed::getRawBits(void) const
{
	return value;
}

void	Fixed::setRawBits(int const raw)
{
	value = raw;
}

bool Fixed::operator>(Fixed const &f) const
{
	if (this->toFloat() > f.toFloat())
		return (true);
	return (false);
}

bool Fixed::operator<(Fixed const &f) const
{
	if (this->toFloat() < f.toFloat())
		return (true);
	return (false);
}

bool Fixed::operator>=(Fixed const &f) const
{
	if (this->toFloat() >= f.toFloat())
		return (true);
	return (false);
}

bool Fixed::operator<=(Fixed const &f) const
{
	if (this->toFloat() <= f.toFloat())
		return (true);
	return (false);
}

bool Fixed::operator==(Fixed const &f) const
{
	if (this->toFloat() == f.toFloat())
		return (true);
	return (false);
}

bool Fixed::operator!=(Fixed const &f) const
{
	if (this->toFloat() != f.toFloat())
		return (true);
	return (false);
}

Fixed Fixed::operator+(Fixed const &f) const
{
	return (Fixed(this->toFloat() + f.toFloat()));
}

Fixed Fixed::operator-(Fixed const &f) const
{
	return (Fixed(this->toFloat() - f.toFloat()));
}

Fixed Fixed::operator*(Fixed const &f) const
{
	return (Fixed(this->toFloat() * f.toFloat()));
}

Fixed Fixed::operator/(Fixed const &f) const
{
	return (Fixed(this->toFloat() / f.toFloat()));
}

Fixed &Fixed::operator++()
{
	this->value++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed vl(*this);
	operator++();
	return (vl);
}

Fixed &Fixed::operator--()
{
	this->value--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed vl(*this);
	operator--();
	return (vl);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a.toFloat() < b.toFloat())
		return (a);
	else
		return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a.toFloat() < b.toFloat())
		return (b);
	else
		return (a);
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a.toFloat() < b.toFloat())
		return (a);
	else
		return (b);
}

Fixed const&Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a.toFloat() < b.toFloat())
		return (b);
	else
		return (a);
}

std::ostream &operator<<(std::ostream &out, const Fixed &f)
{
    out << f.toFloat();
    return out;
}