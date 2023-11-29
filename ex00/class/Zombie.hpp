/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 17:57:49 by eguelin           #+#    #+#             */
/*   Updated: 2023/11/29 13:50:49 by eguelin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

# define DEFAULT_T "\033[0m"
# define RED_T "\033[31m"
# define GREEN_T "\033[32m"

class Zombie
{
	public:

		Zombie( std::string name );
		~Zombie( void );

		void	announce( void ) const;

	private:

		std::string	_name;
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif
