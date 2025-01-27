/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 15:09:28 by ibouram           #+#    #+#             */
/*   Updated: 2025/01/26 19:00:37 by ibouram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
    this->type = "AMateria";
}

AMateria::AMateria(std::string const & type)
{
    this->type = type;
}

AMateria::AMateria(const AMateria &A)
{
    *this = A;
}

AMateria &AMateria::operator=(const AMateria &A)
{
    if (this != &A)
        this->type = A.type;
    return (*this);
}

AMateria::~AMateria()
{

}

std::string const & AMateria::getType() const
{
    return (type);
}

void AMateria::use(ICharacter& target)
{
    (void)target;
}

