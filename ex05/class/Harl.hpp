/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguelin <eguelin@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 19:03:19 by eguelin           #+#    #+#             */
/*   Updated: 2023/11/25 12:22:15 by eguelin          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

# define RESET_T "\033[0m"
# define RED_T "\033[31m"
# define GREEN_T "\033[32m"

class Harl
{
	public:

		Harl( void );
		~Harl( void );

		void	complain( std::string level );

	private:

		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
};

#endif
