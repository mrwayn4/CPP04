/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 22:19:40 by ibouram           #+#    #+#             */
/*   Updated: 2024/11/25 19:08:01 by ibouram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string name;


	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void announce( void );
		void	set_name(std::string s);
};

Zombie* newZombie( std::string name );
void 	randomChump( std::string name );

#endif