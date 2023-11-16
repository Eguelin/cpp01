/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 19:04:25 by eguelin           #+#    #+#             */
/*   Updated: 2023/11/16 15:32:40 by eguelin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <string>

Harl::Harl( void )
{
}

Harl::~Harl( void )
{
}

void	Harl::debug( void )
{
	std::cout << "[DEBUG]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup"\
	" burger.\nI really do!\n" << std::endl;

	Harl::info();
}

void	Harl::info( void )
{
	std::cout << "[INFO]\nI cannot believe adding extra bacon costs more money.\nYou didn't putenough"\
	" bacon in my burger!\nIf you did, I wouldn't be asking for more!\n"<< std::endl;

	Harl::warning();
}

void	Harl::warning( void )
{
	std::cout << "[WARNING]\nI think I deserve to have some extra bacon for free.\nI've been coming for"\
	"years whereas you started working here since last month.\n"<< std::endl;

	Harl::error();
}

void	Harl::error( void )
{
	std::cout << "[ERROR]\nThis is unacceptable!\nI want to speak to the manager now.\n"<< std::endl;
}

void	Harl::complain( std::string level )
{
	size_t		i = 0;
	std::string	lvl[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	while (i < sizeof(lvl) / sizeof(*lvl) && level.compare(lvl[i]))
		i++;
	switch (i)
	{
		case 0:
			Harl::debug();
			return;
		case 1:
			Harl::info();
			return;
		case 2:
			Harl::warning();
			return;
		case 3:
			Harl::error();
			return;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			return;
	}
}
