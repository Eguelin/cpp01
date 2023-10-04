/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 17:58:07 by eguelin           #+#    #+#             */
/*   Updated: 2023/10/04 14:42:45 by eguelin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void )
{
}

Zombie::~Zombie( void )
{
	std::cout << Zombie::_name << std::endl;
}

void	Zombie::announce( void )
{
	std::cout << Zombie::_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setname( std::string name ) const
{
	Zombie::_name = name;
}
