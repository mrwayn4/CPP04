/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 11:58:08 by ibouram           #+#    #+#             */
/*   Updated: 2025/01/04 12:06:19 by ibouram          ###   ########.fr       */
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
};
std::ostream &operator<<(std::ostream &out, Fixed const &f);

#endif