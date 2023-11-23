/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:25:08 by eguelin           #+#    #+#             */
/*   Updated: 2023/11/23 17:59:54 by eguelin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

# define RESET_T "\033[0m"
# define BLACK_T "\033[0;30m"

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
