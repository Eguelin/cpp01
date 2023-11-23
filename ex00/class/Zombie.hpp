/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 17:57:49 by eguelin           #+#    #+#             */
/*   Updated: 2023/11/23 17:59:54 by eguelin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

# define RESET_T "\033[0m"
# define BLACK_T "\033[0;30m"

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
