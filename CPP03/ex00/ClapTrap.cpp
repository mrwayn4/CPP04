/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 10:15:03 by ibouram           #+#    #+#             */
/*   Updated: 2025/01/08 12:06:14 by ibouram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Dedault Constructor called\n";
	name = "nothing";
	Hit_pts = 10;
	Energy_pts = 10;
	Attack_damg = 0;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "Constructor called\n";
	this->name = name;
	Hit_pts = 10;
	Energy_pts = 10;
	Attack_damg = 0;
}

ClapTrap::ClapTrap(const ClapTrap &C_T)
{
	std::cout << "Copy Constructor called\n";
	*this = C_T;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &C_T)
{
	std::cout << "Copy assignment operator called\n";
	Hit_pts = C_T.Hit_pts;
	Energy_pts = C_T.Energy_pts;
	Attack_damg = C_T.Attack_damg;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called\n";
}

void	ClapTrap::attack(const std::string& target)
{
	if (Energy_pts && Hit_pts)
		Energy_pts--;
	else
	{
		if (!Energy_pts)
			std::cout << "ClpTrap " << name << " is out of energy\n";
		if (!Hit_pts)
			std::cout << "ClpTrap " << name << " Is No Hit Points\n";
		return ;
	}
	std::cout << "ClapTrap " << name << " attack " << target << " causing " << Attack_damg << " points of damage!\n";
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (!Hit_pts)
	{
		std::cout << "ClpTrap " << name << " Is No Hit Points\n";
		return ;
	}
	if (!Energy_pts)
	{
		std::cout << "ClpTrap " << name << " is out of energy\n";
		return ;
	}
	if ((int)amount < 0)
	{
		std::cout << "ClapTrap " << name << " is not taking any damage\n";
		return ;
	}
	Hit_pts -= amount;
	if (Hit_pts < 0)
		Hit_pts = 0;
	std::cout << "ClapTrap " << name << " take " << amount << " points of damage!\n";
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (Hit_pts && Energy_pts && (int)amount > 0)
	{
		Hit_pts += amount;
		std::cout << "ClapTrap " << name << " be repaired " << amount << " points of damage!\n";
		Energy_pts--;
	}
	
	else if (!Hit_pts)
	{
		std::cout << "ClpTrap " << name << " Is No Hit Points\n";
		return ;
	}
	else if (!Energy_pts)
	{
		std::cout << "ClpTrap " << name << " is out of energy\n";
		return ;
	}
	else if ((int)amount < 0)
	{
		std::cout << "ClapTrap " << name << " is not taking any damage\n";
		return ;
	}
}
