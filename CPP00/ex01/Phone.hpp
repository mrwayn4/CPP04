/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phone.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 10:54:38 by ibouram           #+#    #+#             */
/*   Updated: 2024/11/15 10:00:32 by ibouram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Contact.hpp"
#include <iostream>

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
};