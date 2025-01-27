/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 15:20:26 by ibouram           #+#    #+#             */
/*   Updated: 2025/01/26 15:45:22 by ibouram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice();
        Ice(const Ice& m);
        Ice(std::string const & type);
        Ice& operator=(const Ice& m);
        ~Ice();
        Ice* clone() const;
        void use(ICharacter& target);
};
#endif