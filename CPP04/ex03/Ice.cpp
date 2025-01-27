/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 15:45:24 by ibouram           #+#    #+#             */
/*   Updated: 2025/01/26 18:06:23 by ibouram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
    this->type = "ice";
}

Ice::Ice(std::string const & type)
{
    this->type = type;
}

Ice::Ice(const Ice &I)
{
    *this = I;
}

Ice &Ice::operator=(const Ice &I)
{
    if (this != &I)
        this->type = I.type;
    return (*this);
}

Ice::~Ice()
{

}

Ice *Ice::clone() const
{
    return (new Ice());
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}