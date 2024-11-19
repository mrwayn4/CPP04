/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phone.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 10:54:03 by ibouram           #+#    #+#             */
/*   Updated: 2024/11/19 21:40:25 by ibouram          ###   ########.fr       */
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

int	s_to_i(std::string s)
{
	int n = 10;
	if (s[0])
		n = s[0] - '0';
	if (s[1])
		n += s[1] - '0';
	return (n);

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
	while (s == "" || ft_isprint(s))
	{
		std::cout << "First name: ";
		std::getline(std::cin, s);
		if (std::cin.eof())
			return ;
	}
	arr[index].set_fname(s);
	s = "";
	while (s == "" || ft_isprint(s))
	{
		std::cout << "Last name: ";
		std::getline(std::cin, s);
		if (std::cin.eof())
			return ;
	}
	arr[index].set_lname(s);
	s = "";
	while (s == "" || ft_isprint(s))
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
	if (size == 8)
		std::cout << "You have reached the maximum number of contacts." << std::endl;
	if (index == 8)
		index = 0;
}

std::string truncat_txt(std::string s)
{
	if (s.size() > 10)
	{
		s.resize(9);
		s += '.';
	}
	return (s);
}

void	PhoneBook::search()
{
	int	i = 0;
	std::cout << " ------------------------------------------- " << std::endl;
	std::cout << "|" << std::setw(10) << "Index";
	std::cout << "|" << std::setw(10) << "First Name";
	std::cout << "|" << std::setw(10) << "Last name";
	std::cout << "|" << std::setw(10) << "Nick name";
	std::cout << "|" << std::endl;
	std::cout << " ------------------------------------------- " << std::endl;
	while (i < size)
	{
		std::cout << "|" << std::setw(10) << i;
		std::cout << "|" << std::setw(10) << truncat_txt(arr[i].get_fname());
		std::cout << "|" << std::setw(10) << truncat_txt(arr[i].get_lname());
		std::cout << "|" << std::setw(10) << truncat_txt(arr[i].get_nname());
		std::cout << "|";
		std::cout << std::endl;
		std::cout << " ------------------------------------------- " << std::endl;
		i++;
	}
	std::string id;
	std::cout << "Select Index: ";
	std::getline(std::cin, id);
	if (std::cin.eof())
		return ;
	if (id.empty() || !ft_isdigit(id) || s_to_i(id) >= size)
	{
		std::cout << id;
		std::cout << size;
		std::cout << "Invalid Index !!" << std::endl;
	}
	else
	{
		int idex = s_to_i(id);
		std::cout << "First Name: " << arr[idex].get_fname() << std::endl;
		std::cout << "Last Name: " << arr[idex].get_lname() << std::endl;
		std::cout << "Nick Name: " << arr[idex].get_nname() << std::endl;
		std::cout << "Phone Number: " << arr[idex].get_pnumber() << std::endl;
		std::cout << "Darkest Secret: " << arr[idex].get_dsecret() << std::endl;
	}
}