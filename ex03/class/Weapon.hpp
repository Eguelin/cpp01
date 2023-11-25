/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:25:08 by eguelin           #+#    #+#             */
/*   Updated: 2023/11/25 12:22:06 by eguelin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

# define RESET_T "\033[0m"
# define RED_T "\033[31m"
# define GREEN_T "\033[32m"

class Weapon
{
	public:

		Weapon( std::string type );
		~Weapon( void );

		const std::string	&getType( void ) const;
		void				setType( std::string type );

	private:

		std::string	_type;
};

#endif
