/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:25:00 by eguelin           #+#    #+#             */
/*   Updated: 2023/11/17 16:17:22 by eguelin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ): _name(name), _weapon(NULL)
{
}

HumanB::~HumanB( void )
{
}

void	HumanB::attack( void ) const
{
	if (!HumanB::_weapon)
		std::cout << HumanB::_name << " has no weapon" << std::endl;
	else
		std::cout << HumanB::_name << " attacks with their " << HumanB::_weapon->getType() << std::endl;
}

void	HumanB::setWeapon( Weapon &weapon )
{
	HumanB::_weapon = &weapon;
}
