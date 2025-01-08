/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 14:50:13 by ibouram           #+#    #+#             */
/*   Updated: 2025/01/08 15:24:51 by ibouram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "Default Constructor ScarvTrap called\n";
    this->Hit_pts = 100;
    this->Energy_pts = 50;
    this->Attack_damg = 20;
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "Constructor ScarvTrap called\n";
    this->name = name;
    this->Hit_pts = 100;
    this->Energy_pts = 50;
    this->Attack_damg = 20;
}

ScavTrap::ScavTrap(const ScavTrap &S_T)
{
    std::cout << "Copy Constructor ScarvTrap called\n";
    *this = S_T;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &S_T)
{
    std::cout << "Copy assignment operator ScarvTrap called\n";
    Hit_pts = S_T.Hit_pts;
    Energy_pts = S_T.Energy_pts;
    Attack_damg = S_T.Attack_damg;
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor ScarvTrap called\n";
}

void ScavTrap::attack(const std::string& target)
{
    if (Energy_pts && Hit_pts)
		Energy_pts--;
	else
	{
		if (!Energy_pts)
			std::cout << "ScavTrap " << name << " is out of energy\n";
		if (!Hit_pts)
			std::cout << "ScavTrap " << name << " Is No Hit Points\n";
		return ;
	}
	std::cout << "ScavTrap " << name << " attack " << target << " causing " << Attack_damg << " points of damage!\n";
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode\n";
}