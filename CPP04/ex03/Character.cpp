/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 18:07:58 by ibouram           #+#    #+#             */
/*   Updated: 2025/01/27 14:25:38 by ibouram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
    this->name = "Character";
    for (int i = 0; i < 4; i++)
        this->inventory[i] = NULL;
}

Character::Character(const Character& m)
{
    *this = m;
}

Character::Character(const std::string& type)
{
    this->name = type;
    for (int i = 0; i < 4; i++)
        this->inventory[i] = NULL;
}

Character& Character::operator=(const Character& m)
{
    if (this != &m)
    {
        this->name = m.name;

        for (int i = 0; i < 4; i++)
        {
            if (this->inventory[i])
                delete this->inventory[i];
            this->inventory[i] = m.inventory[i]->clone();
        }
    }
    return (*this);
}


Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->inventory[i])
            delete this->inventory[i];
    }
}

std::string const & Character::getName() const
{
    return (name);
}

void Character::equip(AMateria* m)
{
    if (m)
    {
        for (int i = 0; i < 4; i++)
        {
            if (inventory[i] == m)
                return ;
            if (!inventory[i])
            {
                inventory[i] = m;
                break;
            }
        }
    }
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx > 3)
    {
        std::cout << "Invalid index\n";
        return ;
    }
    if (inventory[idx])
    {
        inventory[idx] = NULL;
    }
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx > 3)
    {
        std::cout << "Invalid index\n";
        return ;
    }
    if (inventory[idx])
        inventory[idx]->use(target);
}