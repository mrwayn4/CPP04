/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 10:46:17 by ibouram           #+#    #+#             */
/*   Updated: 2024/11/28 17:20:42 by ibouram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void	sed_for_losers(char **s)
{
	std::string filename = s[1];
	std::ifstream file(filename);
	std::string s1 = s[2];
	std::string s2 = s[3];
	std::string line;
	if (!file.is_open())
	{
		std::cout << "Error: No such file exists.\n";
		return ;
	}
	std::ofstream output(filename + ".replace");
	if (!output.is_open())
	{
		std::cout << "Error: Opening Outfile Failure !!\n";
		return ;
	}
	std::string line_contnt;
	while (std::getline(file, line))
	{
		line_contnt += line;
		if (!file.eof())
			line_contnt += "\n";
	}
	size_t found = 0;
	while ((found = line_contnt.find(s1, found)) != std::string::npos && !s1.empty())
	{
		line_contnt.erase(found, s1.length());
		line_contnt.insert(found, s2);
		found += s2.length();
	}
	output << line_contnt;
	file.close();
	output.close();
}

int main (int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Error: Wrong Input !!\n<filename> <s1> <s2>\n";
		return (0);
	}
	sed_for_losers(av);
}