/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 17:58:07 by eguelin           #+#    #+#             */
/*   Updated: 2023/11/23 17:59:54 by eguelin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* ************************************************************************** */
/*                         Constructors & Destructors                         */
/* ************************************************************************** */

Zombie::Zombie( std::string name ): _name(name)
{
	std::cout << BLACK_T << "Zombie constructor called" << RESET_T << std::endl;
}

Zombie::~Zombie( void )
{
	std::cout << BLACK_T << "Zombie " << this->_name;
	std::cout << " destructor called" << RESET_T << std::endl;
}

/* ************************************************************************** */
/*                           Public member functions                          */
/* ************************************************************************** */

void	Zombie::announce( void ) const
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
