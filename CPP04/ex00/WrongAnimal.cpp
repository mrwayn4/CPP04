/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 10:25:39 by ibouram           #+#    #+#             */
/*   Updated: 2025/01/26 10:34:28 by ibouram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->type = "WrongAnimal";
    std::cout << "WrongAnimal default constructor called\n"; 
}

WrongAnimal::WrongAnimal(const WrongAnimal &A)
{
    *this = A;
    std::cout << "WrongAnimal copy constructor called\n"; 
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &A)
{
    if (this != &A)
        this->type = A.type;
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called\n";
}

void WrongAnimal::makeSound() const
{
    std::cout << "wrong sound\n";
}

std::string WrongAnimal::getType() const
{
    return (type);
}