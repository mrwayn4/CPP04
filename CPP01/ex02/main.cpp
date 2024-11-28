/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 10:01:49 by ibouram           #+#    #+#             */
/*   Updated: 2024/11/26 10:28:46 by ibouram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main ()
{
	std::string s = "HI THIS IS BRAIN";
	std::string *ptr = &s;
	std::string &ref = s;
	std:: cout << "String Address: " << &s << std::endl;
	std:: cout << "Pointer Address: " << ptr << std::endl;
	std:: cout << "Reference Address: " << &ref << std::endl;
	std:: cout << "String  Value: " << s << std::endl;
	std:: cout << "Pointer Value: " << *ptr << std::endl;
	std:: cout << "Reference Value: " << ref << std::endl;
}