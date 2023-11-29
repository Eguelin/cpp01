/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:24:53 by eguelin           #+#    #+#             */
/*   Updated: 2023/11/29 13:50:49 by eguelin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

/* ************************************************************************** */
/*                         Constructors & Destructors                         */
/* ************************************************************************** */

HumanA::HumanA( std::string name, Weapon &weapon ): _name(name), _weapon(weapon)
{
	std::cout << GREEN_T << "HumanA constructor called" << DEFAULT_T << std::endl;
}

HumanA::~HumanA( void )
{
	std::cout << RED_T << "HumanA destructor called" << DEFAULT_T << std::endl;
}

/* ************************************************************************** */
/*                           Public member functions                          */
/* ************************************************************************** */

void	HumanA::attack( void ) const
{
	std::cout << HumanA::_name << " attacks with their " << HumanA::_weapon.getType() << std::endl;
}
