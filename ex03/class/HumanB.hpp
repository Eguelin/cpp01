/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:24:49 by eguelin           #+#    #+#             */
/*   Updated: 2023/11/22 16:13:11 by eguelin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
	public:

		HumanB( std::string name );
		~HumanB( void );

		void	setWeapon( Weapon &weapon );

		void	attack( void ) const;

	private:

		std::string	_name;
		Weapon		*_weapon;
};

#endif
