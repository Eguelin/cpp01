/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:25:03 by eguelin           #+#    #+#             */
/*   Updated: 2023/11/25 12:16:38 by eguelin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

/* ************************************************************************** */
/*                         Constructors & Destructors                         */
/* ************************************************************************** */

Weapon::Weapon( std::string type ): _type(type)
{
	std::cout << GREEN_T << "Weapon constructor called" << RESET_T << std::endl;
}

Weapon::~Weapon( void )
{
	std::cout << RED_T << "Weapon destructor called" << RESET_T << std::endl;
}

/* ************************************************************************** */
/*                              Getters & Setters                             */
/* ************************************************************************** */

const std::string	&Weapon::getType( void ) const
{
	return (Weapon::_type);
}

void	Weapon::setType( std::string type )
{
	Weapon::_type = type;
}
