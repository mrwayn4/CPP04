/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 10:18:41 by ibouram           #+#    #+#             */
/*   Updated: 2024/11/27 10:40:20 by ibouram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
}
HumanB::~HumanB()
{

}

void	HumanB::attack()
{
	std::cout << name << " attacks with their " << this->my_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &wp)
{
	this->my_weapon = &wp;
}