/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 19:23:34 by ibouram           #+#    #+#             */
/*   Updated: 2025/01/26 12:07:55 by ibouram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::AAnimal()
{
    this->type = "AAnimal";
    std::cout << "AAnimal default constructor called\n"; 
}

AAnimal::AAnimal(const AAnimal &A)
{
    *this = A;
    std::cout << "AAnimal copy constructor called\n"; 
}

AAnimal &AAnimal::operator=(const AAnimal &A)
{
    if (this != &A)
        this->type = A.type;
    return (*this);
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal destructor called\n";
}

std::string AAnimal::getType() const
{
    return (type);
}