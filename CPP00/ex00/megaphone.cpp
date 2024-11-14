/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 10:41:01 by ibouram           #+#    #+#             */
/*   Updated: 2024/11/14 10:46:46 by ibouram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main (int ac, char **av)
{
	int j = 1;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (av[j])
		{
			int i = 0;
			while (av[j][i])
			{
				std::cout << (char)std::toupper(av[j][i]);
				i++;
			}
			j++;
		}
		std::cout << std::endl;
	}
}