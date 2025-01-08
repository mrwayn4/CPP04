/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 11:58:06 by ibouram           #+#    #+#             */
/*   Updated: 2025/01/05 10:13:43 by ibouram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
{
	value = 0;
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &f)
{
	std::cout << "Copy constructor called\n";
	*this = f;
}

Fixed::Fixed(const int f)
{
	std::cout << "Int constructor called\n";
	this->value = f * (1 << frac);
}

Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called\n";
	this->value = roundf(f * (1 << frac));
}

Fixed &Fixed::operator=(const Fixed &f)
{
	std::cout << "Copy assignment operator called\n";
	value = f.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
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

std::ostream &operator<<(std::ostream &out, const Fixed &f)
{
    out << f.toFloat();
    return out;
}