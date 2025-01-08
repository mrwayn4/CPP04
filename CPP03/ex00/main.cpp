/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 11:36:23 by ibouram           #+#    #+#             */
/*   Updated: 2025/01/08 15:52:09 by ibouram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main ()
{
   ClapTrap C;
   ClapTrap COPY(C);
   ClapTrap A;
   A = COPY;
   ClapTrap C_T("idder");
   C_T.attack("ziyad");
   C_T.beRepaired(5);
   C_T.takeDamage(20);
   C_T.attack("ziyad");
   C_T.beRepaired(2);
}
