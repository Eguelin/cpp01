/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:24:56 by eguelin           #+#    #+#             */
/*   Updated: 2023/11/22 16:12:55 by eguelin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
	public:

		HumanA( std::string name, Weapon &weapon );
		~HumanA( void );

		void	attack( void ) const;

	private:

		std::string	_name;
		Weapon		&_weapon;
};

#endif
