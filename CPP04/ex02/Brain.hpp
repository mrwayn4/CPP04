/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 10:48:34 by ibouram           #+#    #+#             */
/*   Updated: 2025/01/26 11:00:12 by ibouram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
    public:
        std::string ideas[100];
        Brain();
        Brain(const Brain &B);
        Brain &operator=(const Brain &B);
        ~Brain();
};

#endif