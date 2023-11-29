/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 17:58:07 by eguelin           #+#    #+#             */
/*   Updated: 2023/11/29 13:50:49 by eguelin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* ************************************************************************** */
/*                         Constructors & Destructors                         */
/* ************************************************************************** */

Zombie::Zombie( void )
{
	std::cout << GREEN_T << "Zombie constructor called" << DEFAULT_T << std::endl;
}

Zombie::~Zombie( void )
{
	std::cout << RED_T << "Zombie " << this->_name;
	std::cout << " destructor called" << DEFAULT_T << std::endl;
}

/* ************************************************************************** */
/*                                   Setters                                  */
/* ************************************************************************** */

void	Zombie::setname( std::string name ) {this->_name = name;}

/* ************************************************************************** */
/*                           Public member functions                          */
/* ************************************************************************** */

void	Zombie::announce( void ) const
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
