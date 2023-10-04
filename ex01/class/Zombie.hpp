/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 17:57:49 by eguelin           #+#    #+#             */
/*   Updated: 2023/10/04 18:03:19 by eguelin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:

	std::string	_name;

public:

	Zombie(void);
	~Zombie(void);

	void	announce(void) const;
	void	setname(std::string name);

};

Zombie*	zombieHorde(int N, std::string name);

#endif


