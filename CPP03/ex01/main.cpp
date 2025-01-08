/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 11:36:23 by ibouram           #+#    #+#             */
/*   Updated: 2025/01/08 16:06:54 by ibouram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main ()
{
   ClapTrap C_T("idder");
   C_T.attack("ziyad");
   C_T.beRepaired(5);
   C_T.takeDamage(20);
   C_T.attack("ziyad");
   C_T.beRepaired(2);
   std::cout << "--------------------------------------\n";
   ScavTrap S_T("idder");
   S_T.attack("ziyad");
   S_T.beRepaired(5);
   S_T.takeDamage(20);
   S_T.attack("ziyad");
   S_T.beRepaired(2);
   S_T.guardGate();
   std::cout << "--------------------------------------\n";
}
