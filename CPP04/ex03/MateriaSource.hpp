/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 20:50:37 by ibouram           #+#    #+#             */
/*   Updated: 2025/01/27 12:05:29 by ibouram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria* inventory[4];
    public:
        MateriaSource();
        MateriaSource(const MateriaSource& m);
        MateriaSource& operator=(const MateriaSource& m);
        ~MateriaSource();

        void learnMateria(AMateria* m);
        AMateria* createMateria(const std::string& type);
};
#endif
