/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 09:10:10 by ibouram           #+#    #+#             */
/*   Updated: 2024/12/18 10:00:38 by ibouram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int N = 1;
	Zombie* Z = zombieHorde(N, "IDDER");
	for (int i = 0; i < N; i++)
		Z[i].announce();
	delete[] Z;
}