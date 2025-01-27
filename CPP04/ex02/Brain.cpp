/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 10:48:37 by ibouram           #+#    #+#             */
/*   Updated: 2025/01/26 11:06:30 by ibouram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called\n";
}

Brain::Brain(const Brain &B)
{
    *this = B;
    std::cout << "Brain copy constructor called\n";
}

Brain &Brain::operator=(const Brain &B)
{
    if (this != &B)
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = B.ideas[i];
    }
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain destructor called\n";
}