/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 17:57:49 by eguelin           #+#    #+#             */
/*   Updated: 2023/11/25 12:21:07 by eguelin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

# define RESET_T "\033[0m"
# define RED_T "\033[31m"
# define GREEN_T "\033[32m"

class Zombie
{
	public:

		Zombie( void );
		~Zombie( void );

		void	setname( std::string name );

		void	announce( void ) const;

	private:

		std::string	_name;
};

Zombie*	zombieHorde( int N, std::string name );

#endif


