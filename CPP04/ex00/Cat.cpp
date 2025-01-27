/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 19:23:28 by ibouram           #+#    #+#             */
/*   Updated: 2025/01/26 10:17:27 by ibouram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    std::cout << "Cat default constructor called\n"; 
}

Cat::Cat(const Cat &C)
{
    *this = C;
    std::cout << "Cat copy constructor called\n"; 
}

Cat &Cat::operator=(const Cat &C)
{
    if (this != &C)
        this->type = C.type;
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat destructor called\n";
}

void Cat::makeSound() const
{
    std::cout << "Meow Meow\n";
}