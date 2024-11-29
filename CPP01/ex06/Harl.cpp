/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 11:02:56 by ibouram           #+#    #+#             */
/*   Updated: 2024/11/29 11:55:00 by ibouram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug()
{
	std::cout << "[ DEBUG ]\n";
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void	Harl::info()
{
	std::cout << "[ INFO ]\n";
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void	Harl::warning()
{
	std::cout << "[ WARNING ]\n";
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
}

void	Harl::error()
{
	std::cout << "[ ERROR ]\n";
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void	Harl::complain(std::string level)
{
	std::string Harl[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*Harlfunct[4])() = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error,
	};
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		if (Harl[i] == level)
			break;
	}
	switch(i)
	{
		case(0):
			(this->*Harlfunct[0])();
			(this->*Harlfunct[1])();
			(this->*Harlfunct[2])();
			(this->*Harlfunct[3])();
			break;
		case(1):
			(this->*Harlfunct[1])();
			(this->*Harlfunct[2])();
			(this->*Harlfunct[3])();
			break;
		case(2):
			(this->*Harlfunct[2])();
			(this->*Harlfunct[3])();
			break;
		case(3):
			(this->*Harlfunct[3])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]\n";
	}
}