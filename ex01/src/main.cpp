/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 18:01:06 by eguelin           #+#    #+#             */
/*   Updated: 2023/10/05 13:05:26 by eguelin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void )
{
	int		n = 5;
	Zombie*	zombie = zombieHorde(n, "Bobo");

	if(!zombie)
		return (1);

	for (int i = 0; i < n; i++)
		zombie[i].announce();

	delete[] zombie;

	return (0);
}
