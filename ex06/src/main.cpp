/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 19:06:17 by eguelin           #+#    #+#             */
/*   Updated: 2023/10/05 13:12:18 by eguelin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char const **argv)
{
	Harl	test;

	if (argc != 2)
	{
		if (argc < 2)
			std::cerr << "not enough arguments" << std::endl;
		else
			std::cerr << "too many arguments" << std::endl;
		return (1);
	}

	test.complain(argv[1]);

	return (0);
}
