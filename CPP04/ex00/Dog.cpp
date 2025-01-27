/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 19:23:25 by ibouram           #+#    #+#             */
/*   Updated: 2025/01/26 10:16:49 by ibouram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "Dog default constructor called\n"; 
}

Dog::Dog(const Dog &D)
{
    *this = D;
    std::cout << "Dog copy constructor called\n"; 
}

Dog &Dog::operator=(const Dog &D)
{
    if (this != &D)
        this->type = D.type;
    return (*this);
}  

Dog::~Dog()
{
    std::cout << "Dog destructor called\n";
}

void Dog::makeSound() const
{
    std::cout << "Hoow Hoow\n";
}