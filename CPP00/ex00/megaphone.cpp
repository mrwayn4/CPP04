/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 10:41:01 by ibouram           #+#    #+#             */
/*   Updated: 2024/12/17 15:23:45 by ibouram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void    ft_toupper(char *str)
{
	int i = 0;	
	while (str[i])
	{
	    std::cout << (char)std::toupper(str[i]);
	    i++;
	}
}

int main(int ac, char **av)
{
	if (ac == 1)
	    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
	    int i = 1;
	    while (av[i])
	    {
	        ft_toupper(av[i]);
	        i++;
	    }
	    std::cout << std::endl;
	}
}