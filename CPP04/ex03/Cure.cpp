/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 15:20:51 by ibouram           #+#    #+#             */
/*   Updated: 2025/01/27 12:19:00 by ibouram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
    this->type = "cure";
}

Cure::Cure(std::string const & type)
{
    this->type = type;
}

Cure::Cure(const Cure &C)
{
    *this = C;
}

Cure &Cure::operator=(const Cure &C)
{
    if (this != &C)
        this->type = C.type;
    return (*this);
}

Cure::~Cure()
{

}

Cure *Cure::clone() const
{
    return (new Cure());
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *\n";
}