/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:25:00 by eguelin           #+#    #+#             */
/*   Updated: 2023/11/25 12:16:38 by eguelin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

/* ************************************************************************** */
/*                         Constructors & Destructors                         */
/* ************************************************************************** */

HumanB::HumanB( std::string name ): _name(name), _weapon(NULL)
{
	std::cout << GREEN_T << "HumanB constructor called" << RESET_T << std::endl;
}

HumanB::~HumanB( void )
{
	std::cout << RED_T << "HumanB destructor called" << RESET_T << std::endl;
}

/* ************************************************************************** */
/*                                   Setters                                  */
/* ************************************************************************** */

void	HumanB::setWeapon( Weapon &weapon )
{
	HumanB::_weapon = &weapon;
}

/* ************************************************************************** */
/*                           Public member functions                          */
/* ************************************************************************** */

void	HumanB::attack( void ) const
{
	if (!HumanB::_weapon)
		std::cout << HumanB::_name << " has no weapon" << std::endl;
	else
		std::cout << HumanB::_name << " attacks with their " << HumanB::_weapon->getType() << std::endl;
}

