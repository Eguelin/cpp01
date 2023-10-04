/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:25:03 by eguelin           #+#    #+#             */
/*   Updated: 2023/10/04 18:06:14 by eguelin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	Weapon::_type = type;
}

Weapon::~Weapon(void)
{
}

const std::string	&Weapon::getType(void) const
{
	return (Weapon::_type);
}

void		Weapon::setType(std::string type)
{
	Weapon::_type = type;
}
