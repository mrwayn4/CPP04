/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 10:21:48 by ibouram           #+#    #+#             */
/*   Updated: 2025/01/05 11:27:55 by ibouram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int	value;
		static const int	frac = 8;
	public:
		Fixed();
		Fixed(const Fixed &f);
        Fixed(int const value);
        Fixed(float const value);
		Fixed &operator=(const Fixed &f);
		~Fixed();
        float toFloat( void ) const;
        int toInt( void ) const;
		int getRawBits( void ) const;
		void setRawBits( int const raw );
        
        bool operator>(Fixed const &f) const;
        bool operator<(Fixed const &f) const;
        bool operator>=(Fixed const &f) const;
        bool operator<=(Fixed const &f) const;
        bool operator==(Fixed const &f) const;
        bool operator!=(Fixed const &f) const;
        
        Fixed operator+(Fixed const &f) const;
        Fixed operator-(Fixed const &f) const;
        Fixed operator*(Fixed const &f) const;
        Fixed operator/(Fixed const &f) const;
        
        Fixed &operator++();
        Fixed operator++(int);
        Fixed &operator--();
        Fixed operator--(int);

        static Fixed &min(Fixed &a, Fixed &b);
        static Fixed &max(Fixed &a, Fixed &b);
        static Fixed const &min(Fixed const &a, Fixed const &b);
        static Fixed const &max(Fixed const &a, Fixed const &b);
};
std::ostream &operator<<(std::ostream &out, Fixed const &f);

#endif