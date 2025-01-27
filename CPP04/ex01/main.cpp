/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 19:23:19 by ibouram           #+#    #+#             */
/*   Updated: 2025/01/26 11:53:38 by ibouram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"


int main()
{
    Animal* j = new Dog();
    Animal* i = new Cat();

    delete j;
    delete i;


    std::cout << "=====================\n";

    Animal *arr[2];

    for (int i = 0; i < 2; i++)
    {
        if (i % 2)
            arr[i] = new Cat();
        else
            arr[i] = new Dog();
    }

    
    for (int i = 0; i < 2; i++)
        delete arr[i];
    
    return 0;
}