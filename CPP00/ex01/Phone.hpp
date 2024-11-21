/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phone.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 10:54:38 by ibouram           #+#    #+#             */
/*   Updated: 2024/11/22 00:15:07 by ibouram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <iomanip>

class PhoneBook
{
	private:
		Contact arr[8];
		int	index;
		int	size;

	public:
		PhoneBook();
		~PhoneBook();
		void	add();
		void	search();
};
#endif