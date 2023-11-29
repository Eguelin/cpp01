/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 19:04:25 by eguelin           #+#    #+#             */
/*   Updated: 2023/11/29 13:50:49 by eguelin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

/* ************************************************************************** */
/*                         Constructors & Destructors                         */
/* ************************************************************************** */

Harl::Harl( void )
{
	std::cout << GREEN_T << "Harl constructor called" << DEFAULT_T << std::endl;
}

Harl::~Harl( void )
{
	std::cout << RED_T << "Harl destructor called" << DEFAULT_T << std::endl;
}

/* ************************************************************************** */
/*                           Private member functions                         */
/* ************************************************************************** */

void	Harl::debug( void )
{
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger." << std::endl;
	std::cout << "I really do!" << std::endl;
}

void	Harl::info( void )
{
	std::cout << "[INFO]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn't putenough bacon in my burger!" << std::endl;
	std::cout << "If you did, I wouldn't be asking for more!"<< std::endl;
}

void	Harl::warning( void )
{
	std::cout << "[WARNING]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I've been coming for years whereas you started working here since last month."<< std::endl;
}

void	Harl::error( void )
{
	std::cout << "[ERROR]" << std::endl;
	std::cout << "This is unacceptable!" << std::endl;
	std::cout << "I want to speak to the manager now."<< std::endl;
}

/* ************************************************************************** */
/*                           Public member functions                          */
/* ************************************************************************** */

void	Harl::complain( std::string level )
{
	void		(Harl::*ft[])(void) = {&Harl::debug, &Harl::info,
									&Harl::warning, &Harl::error};
	std::string	lvl[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4 ; i++)
	{
		if (!level.compare(lvl[i]))
		{
			(this->*ft[i])();
			return ;
		}
	}

	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}
