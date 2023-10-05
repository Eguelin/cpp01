/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 19:04:25 by eguelin           #+#    #+#             */
/*   Updated: 2023/10/05 20:04:07 by eguelin          ###   ########lyon.fr   */
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
	void		(Harl::*ft[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	lvl[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (size_t i = 0; i < sizeof(lvl) / sizeof(*lvl) ; i++)
	{
		if (!level.compare(lvl[i]))
		{
			(this->*ft[i])();
			return ;
		}
	}

	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}
