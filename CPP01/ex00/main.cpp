/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:19:03 by ibouram           #+#    #+#             */
/*   Updated: 2024/12/18 09:55:41 by ibouram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ()
{
	Zombie* newZom = newZombie("TAFASOH");
	newZom->announce();
	randomChump("IYIH_IYIH");
	delete(newZom);
}