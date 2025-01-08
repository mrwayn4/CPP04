/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 16:09:48 by ibouram           #+#    #+#             */
/*   Updated: 2025/01/08 16:16:47 by ibouram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "Default Constructor FragTrap called\n";
    this->Hit_pts = 100;
    this->Energy_pts = 100;
    this->Attack_damg = 30;
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "Constructor FragTrap called\n";
    this->name = name;
    this->Hit_pts = 100;
    this->Energy_pts = 100;
    this->Attack_damg = 30;
}

FragTrap::FragTrap(const FragTrap &F_T)
{
    std::cout << "Copy Constructor FragTrap called\n";
    *this = F_T;
}

FragTrap &FragTrap::operator=(const FragTrap &F_T)
{
    std::cout << "Copy assignment operator FragTrap called\n";
    Hit_pts = F_T.Hit_pts;
    Energy_pts = F_T.Energy_pts;
    Attack_damg = F_T.Attack_damg;
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "Destructor FragTrap called\n";
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap requests a high five\n";
}