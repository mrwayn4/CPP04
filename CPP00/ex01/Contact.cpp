/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 10:53:55 by ibouram           #+#    #+#             */
/*   Updated: 2024/11/19 17:44:47 by ibouram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{

}
Contact::~Contact()
{

}

std::string Contact::get_fname(void)
{
	return (First_Name);
}

std::string Contact::get_lname(void)
{
	return (Last_Name);
}

std::string Contact::get_nname(void)
{
	return (Nick_Name);
}
std::string Contact::get_pnumber(void)
{
	return (Phone_Number);
}

std::string Contact::get_dsecret(void)
{
	return (Darkest_Secret);
}

void Contact::set_fname(std::string s)
{
	First_Name = s;
}

void Contact::set_lname(std::string s)
{
	Last_Name = s;
}

void Contact::set_nname(std::string s)
{
	Nick_Name = s;
}

void Contact::set_pnumber(std::string s)
{
	Phone_Number = s;
}

void Contact::set_dsecret(std::string s)
{
	Darkest_Secret = s;
}
