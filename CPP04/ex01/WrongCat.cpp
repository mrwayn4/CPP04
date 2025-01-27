/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 10:26:01 by ibouram           #+#    #+#             */
/*   Updated: 2025/01/26 10:26:40 by ibouram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->type = "WrongCat";
    std::cout << "WrongCat default constructor called\n"; 
}

WrongCat::WrongCat(const WrongCat &C)
{
    *this = C;
    std::cout << "WrongCat copy constructor called\n"; 
}

WrongCat &WrongCat::operator=(const WrongCat &C)
{
    if (this != &C)
        this->type = C.type;
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called\n";
}

void WrongCat::makeSound() const
{
    std::cout << "Meow Meow\n";
}