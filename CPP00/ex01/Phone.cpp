/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phone.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 10:54:03 by ibouram           #+#    #+#             */
/*   Updated: 2024/11/15 12:03:29 by ibouram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phone.hpp"
#include "Contact.hpp"

int	ft_isprint(std::string c)
{
	int i = 0;
	while (c[i])
	{
		if (c[i] < 32 || c[i] > 126)
			return (1);
		i++;
	}
	i = 0;
	while (c[i])
	{
		if (c[i] != ' ')
			return (0);
		i++;
	}
	return (1);
}

int	ft_isalpha(std::string s)
{
	int i = 0;
	while (s[i])
	{
		if ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122))
			return (1);
		i++;
	}
	return (0);
}

int	ft_isdigit(std::string c)
{
	int i = 0;
	while (c[i])
	{
		if (c[i] >= 48 && c[i] <= 57)
			return (1);
		i++;
	}
	return (0);
}

PhoneBook::PhoneBook() // Constructor for intializes object 
{
	index = 0;
	size = 0;
	std::cout << "Welcome To your Phonebook !" << std::endl;
}

PhoneBook::~PhoneBook() // destructor for clean up
{
	std::cout << "Hope to see you again!" << std::endl;
}

void	PhoneBook::add()
{
	std::string s;

	s = "";
	while (s == "" || ft_isprint(s) || ft_isdigit(s))
	{
		std::cout << "First name: ";
		std::getline(std::cin, s);
		if (std::cin.eof())
			return ;
	}
	arr[index].set_fname(s);
	s = "";
	while (s == "" || ft_isprint(s) || ft_isdigit(s))
	{
		std::cout << "Last name: ";
		std::getline(std::cin, s);
		if (std::cin.eof())
			return ;
	}
	arr[index].set_lname(s);
	s = "";
	while (s == "" || ft_isprint(s) || ft_isdigit(s))
	{
		std::cout << "Nick name: ";
		std::getline(std::cin, s);
		if (std::cin.eof())
			return ;
	}
	arr[index].set_nname(s);
	s = "";
	while (s == "" || ft_isprint(s) || ft_isalpha(s))
	{
		std::cout << "Phone number: ";
		std::getline(std::cin, s);
		if (std::cin.eof())
			return ;
	}
	arr[index].set_pnumber(s);
	s = "";
	while (s == "" || ft_isprint(s))
	{
		std::cout << "Darkest Secret: ";
		std::getline(std::cin, s);
		if (std::cin.eof())
			return ;
	}
	arr[index].set_dsecret(s);
	index++;
	if (size < 8)
		size++;
	if (index == 8)
		index = 0;
}