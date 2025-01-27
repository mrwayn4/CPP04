/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 19:23:25 by ibouram           #+#    #+#             */
/*   Updated: 2025/01/26 11:12:56 by ibouram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    B = new Brain();
    this->type = "Dog";
    std::cout << "Dog default constructor called\n"; 
}

Dog::Dog(const Dog &D)
{
    B = NULL;
    *this = D;
    std::cout << "Dog copy constructor called\n"; 
}

Dog &Dog::operator=(const Dog &D)
{
    if (this != &D)
    {
        this->type = D.type;
        delete B;
        B = new Brain();
        for (int i = 0 ; i < 100; i++)
            B->ideas[i] = D.B->ideas[i];
    }
    return (*this);
}  

Dog::~Dog()
{
    delete B;
    std::cout << "Dog destructor called\n";
}

void Dog::makeSound() const
{
    std::cout << "Hoow Hoow\n";
}