/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 19:23:28 by ibouram           #+#    #+#             */
/*   Updated: 2025/01/26 11:14:59 by ibouram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    B = new Brain();
    std::cout << "Cat default constructor called\n"; 
}

Cat::Cat(const Cat &C)
{
    B = NULL;
    *this = C;
    std::cout << "Cat copy constructor called\n"; 
}

Cat &Cat::operator=(const Cat &C)
{
    if (this != &C)
    {
        this->type = C.type;
        delete B;
        B = new Brain();
        for (int i = 0; i < 100; i++)
            B->ideas[i] = C.B->ideas[i];
    }
    return (*this);
}

Cat::~Cat()
{
    delete B;
    std::cout << "Cat destructor called\n";
}

void Cat::makeSound() const
{
    std::cout << "Meow Meow\n";
}