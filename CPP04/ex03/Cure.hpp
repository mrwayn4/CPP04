/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 15:19:43 by ibouram           #+#    #+#             */
/*   Updated: 2025/01/26 15:29:23 by ibouram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        Cure(const Cure& m);
        Cure(std::string const & type);
        Cure& operator=(const Cure& m);
        ~Cure();
        Cure* clone() const;
        void use(ICharacter& target);
};;
#endif