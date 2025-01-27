/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 19:23:34 by ibouram           #+#    #+#             */
/*   Updated: 2025/01/26 10:34:43 by ibouram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    this->type = "Animal";
    std::cout << "Animal default constructor called\n"; 
}

Animal::Animal(const Animal &A)
{
    *this = A;
    std::cout << "Animal copy constructor called\n"; 
}

Animal &Animal::operator=(const Animal &A)
{
    if (this != &A)
        this->type = A.type;
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Animal destructor called\n";
}

void Animal::makeSound() const
{
    std::cout << "no sound\n";
}

std::string Animal::getType() const
{
    return (type);
}