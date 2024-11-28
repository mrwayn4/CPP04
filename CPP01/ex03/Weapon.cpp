/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 10:44:17 by ibouram           #+#    #+#             */
/*   Updated: 2024/11/27 09:54:03 by ibouram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{

}
Weapon::Weapon(std::string type)
{
	this->type = type;
}
Weapon::~Weapon()
{

}

const std::string& Weapon::getType()
{
	return (type);
}

void	Weapon::setType(std::string s)
{
	s = type;
}