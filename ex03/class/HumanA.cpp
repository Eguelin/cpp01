/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:24:53 by eguelin           #+#    #+#             */
/*   Updated: 2023/10/04 14:42:06 by eguelin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weapon )
{
	HumanA::_name = name;
	HumanA::_weapon = &weapon;
	return ;
}

HumanA::~HumanA( void )
{
}

void	HumanA::attack( void ) const
{
	std::cout << HumanA::_name << " attacks with their " << HumanA::_weapon->getType() << std::endl;
}
