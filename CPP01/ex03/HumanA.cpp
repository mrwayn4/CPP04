/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 10:51:46 by ibouram           #+#    #+#             */
/*   Updated: 2024/11/27 10:19:05 by ibouram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::~HumanA()
{

}

HumanA::HumanA(std::string name, Weapon &my_weapon) : name(name), my_weapon(my_weapon)
{
}

void	HumanA::attack()
{
	std::cout << name << " attacks with their " << this->my_weapon.getType() << std::endl;
}