/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 10:54:00 by ibouram           #+#    #+#             */
/*   Updated: 2024/11/19 17:34:36 by ibouram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phone.hpp"

int main ()
{
	PhoneBook pb;
	std::string s;

	while (s != "EXIT")
	{
		std::cout << "Enter the command: ";
		std::getline(std::cin, s);
		if (std::cin.eof())
			break ;
		if (s == "ADD")
			pb.add();
		else if (s == "SEARCH")
			pb.search();
		if (std::cin.eof())
		{
			std::cout << std::endl;
			return (0);
		}
	}
}