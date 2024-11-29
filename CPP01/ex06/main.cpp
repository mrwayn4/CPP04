/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 11:05:45 by ibouram           #+#    #+#             */
/*   Updated: 2024/11/29 11:24:38 by ibouram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (int ac, char **av)
{
	std::string level;
	if (ac != 2)
	{
		std::cout << "Invalid Input !!\n <Type>\n";
		return (1);
	}
	level = av[1];
	Harl harl;
	harl.complain(level);
}