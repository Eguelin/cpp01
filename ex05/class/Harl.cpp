/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 19:04:25 by eguelin           #+#    #+#             */
/*   Updated: 2023/10/05 13:08:43 by eguelin          ###   ########lyon.fr   */
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
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup"\
	" burger. I really do!" << std::endl;
}

void	Harl::info( void )
{
	Harl::debug();
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't putenough"\
	" bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning( void )
{
	Harl::info();
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for"\
	"years whereas you started working here since last month." << std::endl;
}

void	Harl::error( void )
{
	warning();
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain( std::string level )
{
	void		(Harl::*ft[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	lvl[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (size_t i = 0; i < 4 ; i++)
	{
		if (!level.compare(lvl[i]))
		{
			(this->*ft[i])();
			return ;
		}
	}

	std::cerr << "Invalid level" << std::endl;
}
