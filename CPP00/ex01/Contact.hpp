/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 10:54:35 by ibouram           #+#    #+#             */
/*   Updated: 2024/11/22 00:15:25 by ibouram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>

class Contact
{
	std::string First_Name;
	std::string Last_Name;
	std::string Nick_Name;
	std::string Phone_Number;
	std::string Darkest_Secret;

	public:
		Contact();
		~Contact();
		std::string get_fname();
		std::string get_lname();
		std::string get_nname();
		std::string get_pnumber();
		std::string get_dsecret();

		void set_fname(std::string s);
		void set_lname(std::string s);
		void set_nname(std::string s);
		void set_pnumber(std::string s);
		void set_dsecret(std::string s);
};
#endif