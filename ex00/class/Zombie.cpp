/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 17:58:07 by eguelin           #+#    #+#             */
/*   Updated: 2023/10/04 18:03:19 by eguelin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	Zombie::_name = name;
}

Zombie::~Zombie(void)
{
	std::cout << Zombie::_name << std::endl;
}

void	Zombie::announce(void) const
{
	std::cout << Zombie::_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
